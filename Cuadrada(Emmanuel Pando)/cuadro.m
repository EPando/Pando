k=input('da el numero= ');
fx=0;
sum=0;
t=0:.001:6;
ao= 1/2;
for i= 1:k
    bk=((-1*(cos(i*pi)))/(i*pi))+ (1/(i*pi));
    fx= bk*sin(i*(pi/2)*t);
    sum= sum+fx;
end
xt= (ao/2) + sum;
    plot(t,xt,'b');