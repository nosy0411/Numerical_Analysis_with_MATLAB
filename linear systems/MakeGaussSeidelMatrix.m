function [A,b] = MakeGaussSeidelMatrix(n)
% n must be=100
C=zeros(n);
d=zeros(n,1);
for i=1:n
    C(i,i)=4;
end
d(1,1)=175;
for i=1:10
    C(i,i+1)=-1;
    C(i,i+10)=-1;
    if i>=2
        C(i,i-1)=-1;
        d(i,1)=75;
    end
    
    if i==10
        C(i,i+1)=0;
    end
end

for i=11:90
    C(i,i-10)=-1;
    C(i,i+10)=-1;
    
    if mod(i,10)==1;
        C(i,i+1)=-1;
        d(i,1)=100;
    elseif mod(i,10)==0;
        C(i,i-1)=-1;
    else
        C(i,i+1)=-1;
        C(i,i-1)=-1;
    end
end

d(91,1)=125;
for i=91:100
     C(i,i-10)=-1;
     if i<100
        C(i,i+1)=-1;
     end
     
     if i>=92
         C(i,i-1)=-1;
         d(i,1)=25;
     end
end
A=C; b=d;
    
    
