ao= pi/4;
t= 0:0.01:6;
k = input('Da el numero ');
ak= cos(k*pi)/(pi*k*k)-(1/pi*k*k);
bk= -cos(k*pi)/k + sin(k*pi)/pi*k;
xf=0;
ft=0;
for i=1:k
ft= pi/8 + cos(pi*i)/pi*i*i - 1/pi*i*i - cos(pi*i)/i;
xf= xf + ft;
end
xt= 1/4 + ft;
plot(t,xt,'b');