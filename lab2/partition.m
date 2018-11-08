function [ A,i ] = partition( A,l,r ) %last

x=A(r);%pivot
i=l;
for j=l:r-1
 if A(j)<=x
 
 temp=A(j);
  A(j)=A(i);
 A(i)=temp;
 i=i+1;
    end
end
temp=A(i);
A(i)=A(r);
A(r)=temp;



end
