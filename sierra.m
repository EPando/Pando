t=0:0.01 : 6;
xd=input('da el numero= ');
todo=0;
for i=1 :xd
bk= (-cos(pi*i)/(pi*i))+ sin(pi*i)/(pi*pi*i*i);
todo= bk * (sen(i*t*pi));
end
fx= (1/8)+todo;

plot(t,xw,'g',t,fx,'b');