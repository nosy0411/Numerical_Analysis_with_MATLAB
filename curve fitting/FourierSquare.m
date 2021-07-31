function [t,f] = FourierSquare(A0,T,n)
t=[0:T/1024:4*T];
nn=length(t);
f=zeros(n,nn);
s=zeros(nn);
for ii = 1:n
    for j = 1:nn
        f(ii,j)=f(ii,j)+4*A0/(2*ii-1)/pi*sin(2*pi*(2*ii-1)*t(j));
        s(j)=s(j)+f(ii,j);
    end
end
hold on
for ii=1:n
    plot(t,f(ii,:),'r:')
end
plot(t,s,'k-','linewidth',2)
hold off
end