ao= pi/4;
t= 0:0.01:2*pi;
k= input('Da el numero= ');
xx=0;
fx=0;
xy=0;
for i=1:k
   if i>0
   fx= ((-cos(i*pi))/i)*sin(i*t);
       if mod(i,2) == 0;
       xx= fx+xx;
       end
   else
    xy=xy+fx;   
   end
end
gx= (pi/8) + xx + xy;
plot(t,gx,'b',t,xy,'g');