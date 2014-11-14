k=input('da el numero= ');
fx=0;
sum=0;
t=0:.001:6;
ao= 1;
for i= 1:k
    ak=((2*cos(i*pi))/(i*i*pi*pi))-(2/(i*i*pi*pi));
    fx= ak*cos(i*(pi/2)*t);
    sum= sum+fx;
end
xt= (ao/2) + sum;
    plot(t,xt,'b');