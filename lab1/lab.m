%str1="2 + 3";
%str1="4 * ( 2 + 3 )";
str='((3+5*1)/8)*14';
%tr1='1+2*3+4';
%str=strsplit(str1);
ary1=rpn(str);
ary=strsplit(ary1);
b=[];
n=length(ary);

 for i=1:n
     %if length(ary)==1
     %res=ary(1);
     %end
     if ary(i) ~= "+" && ary(i) ~= "-" && ary(i) ~= "*" && ary(i) ~= "/"
         b=[str2double(ary(i)),b];
         %push(ary(i),b);     
     else 
         a=b(1);
         b=b(2:end);
         c=b(1);
         if length(b)==2
             b=b(2);
         else
             b=b(2:end);
         end
         if ary(i) == "+"
             %push(a+c,b);
             sum=a+c;
             b=[sum,b];
         elseif ary(i) =="'-"
               sum=a-c;
             b=[sum,b];
         elseif ary(i) == "*"
                sum=a*c;
             b=[sum,b];
         elseif ary(i)=="/"
              sum=a/c;
             b=[sum,b];
         end
         %}
     end
 end

 disp("result:"+b);

