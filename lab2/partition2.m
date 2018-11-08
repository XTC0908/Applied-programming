function [ A,i ] = partition2( A,l,r ) 


i=l;
if l<r
    x=A(floor((r+l)/2));%pivot
	tmp1=A(r);
    tmp2=A(floor((r+l)/2));
    A(floor((r+l)/2))=tmp1;
    A(r)=tmp2;  %switch pvt to r
    h=r-1;
    le=l;
    while le<h
        while A(h)>x &&le<h
            h=h-1;
        end
        while A(le)<=x && le<h
            le=le+1;
            i=i+1;
        end
        if(le<=h)
            temp=A(le);
            A(le)=A(h);
            A(h)=temp;
        end
   
        end
end
        if A(h)>A(r)
                t1=A(r);
                t2=A(h);
                A(h)=t1;
                A(r)=t2;
                
            else
                 t1=A(r);
                t2=A(h+1);
                A(h+1)=t1;
                A(r)=t2;
                i=i+1;
              
            end
end

        



