function output = rpn(str)
s=stack;
output='';
len = length(str);
for i=1:len
 
 if str(i)=='('
            s=push(str(i),s);
 elseif str(i)==')'
                while s(1)~='('
                    output(end+1)=s(1);
                    output(end+1)=' ';
                    s=pop(s);
                end %while
                s=pop(s);%pop (
 elseif str(i)=='+' | str(i)=='-' | str(i)=='*' | str(i)=='/'
                    
                       
                        while ~empty(s) && pri(s(1)) >= pri(str(i))
                            output(end+1)=s(1);
                            output(end+1)=' ';
                            s=s(2:end);
                           
                        end %while
                       
                         %s=push(str(i),s);
                         s=[str(i),s];
                         s(1)=str(i);
                   
                   
                    else
                    output(end+1)=str(i);
                    if i~=length(str)
                        if str(i+1)<'0' | str(i+1)>'9'
                            output(end+1)=' ';
                        end
                    else
                        output(end+1)=' ';
                    end
 end
end
        
           while length(s)~=0
                output(end+1)=s(1);
                output(end+1) = ' ';
                s=s(2:end);
            end
            output=output(1:(end-1));
            disp("result:"+output);
 end

            
                
                        
                

