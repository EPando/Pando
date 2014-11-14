f1=20;
f2= 44;
fs=100;
n=256;
k=0:255;
a1=10;
a2=20;
t=1/fs;
funcion=a1*cos(2*pi*f1*k*t)+a2*cos(2*pi*f2*k*t);
plot(k*t,funcion)
stem(funcion);
transformada=fft(funcion);
absoluto=abs(transformada);
stem(k(1:n/2),absoluto(1:n/2));
jiji=k/(n*t);
stem(jiji(1:n/2),absoluto(1:n/2))