function a=debug(a)
a=[9 8 7 6 5 4 3 2 1];
h=4;
while h<=length(a)
    h=round(3*h+1);
end
while h>1
    h=round(h/3);    %interval
    
    for i=round(h+1):length(a) %error happens here 1
       
        v=a(i);
        j=i;
        
        while j>=h+1 && a(round(j-h))>v %%2
            a(j)=a(j-h);
            j=j-h;
            
        end
        a(j)=v; %3
    end
end
        

