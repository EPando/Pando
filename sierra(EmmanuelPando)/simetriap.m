
k=input('da el numero= ');
fx=0;
fex=0;
sum=0;
t=0:.001:6;
ao= pi/4;
for i= 1:k
    bk=(-1*(cos(i*pi))/i);
    ak=((cos(i*pi))/(i*i*pi))-(1/(i*i*pi));
    fx= bk*sin(i*(pi/2)*t);
    fex = ak*cos(i*(pi/2)*t);
    sum = fx + fex + sum;
end
xt= (ao/2) + sum;
    plot(t,xt,'b');