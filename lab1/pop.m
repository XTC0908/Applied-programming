function s = pop(s);
if empty(s)
    el = []; 
elseif length(s) == 1
el = s(1);
    s = stack;
else
el = s(1);
    s = s(2:end);
end % if
end % pop