pk=1;
a0=(1/2);
func=0;
final=0
t=0:.1:4;
for k=1:2:1000
    bk=(((0-1)*(cos(k*pi)))/(k*pi))+ (1/(k*pi));
   
    
    func= bk*sin(k*(pi/2)*t);
    
    final= final+func;
    plot(t,(a0/2)+final)
end