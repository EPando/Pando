k=1;
a0=1;
func=0;
final=0
t=0:.1:4;
for k=1:1:1000
    ak=((2*cos(k*pi))/(k*k*pi*pi))-(2/(k*k*pi*pi));
   
    
    func= ak*cos(k*(pi/2)*t);
    
    final= final+func;
    plot(t,(a0/2)+final)
end