function [ A ] = quicksort( A,l,r )

if l<r
[A,i]=partition2(A,l,r);
 A=quicksort(A,l,i-1);
 A=quicksort(A,i+1,r);
end


end
