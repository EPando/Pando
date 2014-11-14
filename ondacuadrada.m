 k=1;
f1= (1/2) + (sin(pi*t*k)/pi)- (sin((3*pi*t*k)/2)/pi);
f2= (1/2) + (sin(pi*t*2)/pi)- (sin((3*pi*t*2)/2)/pi);
f3= (1/2) + (sin(pi*t*3)/pi)- (sin((3*pi*t*3)/2)/pi);
f4= (1/2) + (sin(pi*t*4)/pi)- (sin((3*pi*t*4)/2)/pi);
f5= (1/2) + (sin(pi*t*5)/pi)- (sin((3*pi*t*5)/2)/pi);
f6= (1/2) + (sin(pi*t*6)/pi)- (sin((3*pi*t*6)/2)/pi);
f7= (1/2) + (sin(pi*t*7)/pi)- (sin((3*pi*t*7)/2)/pi);
f8= (1/2) + (sin(pi*t*8)/pi)- (sin((3*pi*t*8)/2)/pi);
ffinal= f1+f2+f3+f4+f5+f6+f7+f8;
t = -2:0.01:2*pi;
plot ( t,ffinal)