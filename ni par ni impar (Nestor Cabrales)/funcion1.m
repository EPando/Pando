k=1;
a0=pi/4;
func=0;
final=0;
t=0:.01:4;
for k=1:1:1000
    bk=((0-1)*(cos(k*pi))/k);
    ak=((cos(k*pi))/(k*k*pi))-(1/(k*k*pi));
    
    func= bk*sin(k*(pi/2)*t);
    func1= ak*cos(k*(pi/2)*t);
    final= final+func+func1;
    plot(t,(a0/2)+final)
end