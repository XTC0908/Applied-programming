%A = [11 22 33 11 44 55 11 -11];
s=unidrnd(100);  %size
fileID = fopen('data.txt','w');
for i=1:s
R = unidrnd(10000);

fprintf(fileID,'%d\n',R);
end
fileID=fopen('data.txt','r');
formatSpec = '%d';


sizeA = [Inf];
A=fscanf(fileID,formatSpec,sizeA);
fclose(fileID);

r = length(A);
E = quicksort(A,1,r);
disp(E);