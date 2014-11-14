t=0 :.01 : 6;
xd=input('da el numero= ');
xdp=0;
x1= 1/4+(-1/(pi*1))*(cos(1*pi)-1)*sin(1*pi*t/2);
xw=x1;
for i= 1:xd
    if i>1
        x1= (-1/(pi*i))*(cos(i*pi)-1)*sin(i*pi*t/2);
        if mod (i,2)==0;
            xdp=x1+xdp;      
        else  
        xw=x1+xw;
        end
    end
        
end
xt=1/4 + xdp;
plot(t,xw,'b',t,xt,'g');
