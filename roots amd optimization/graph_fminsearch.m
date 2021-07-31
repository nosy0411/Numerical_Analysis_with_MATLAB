function [x,y]=graph_fminsearch(f,variable)
k=size(variable,2);
x=zeros(1,k);
y=zeros(1,k);
for i=1:k
    [X,Fx]=fminsearch(f,[0 0],0,variable(i)*pi/180);
    x(i)=X(1);
    y(i)=X(2);
end