function x = pentadiag(A,b)
n=size(A,2);
x=zeros(n,1);
d_diag=[0;0;diag(A,-2)];
e_diag=[0;diag(A,-1)];
f_diag=diag(A);
g_diag=diag(A,1);
h_diag=diag(A,2);

e=zeros(n,1);f=zeros(n,1);g=zeros(n-1,1);h=zeros(n-2,1);r=zeros(n,1);

f(1)=f_diag(1);
g(1)=g_diag(1);
h(1)=h_diag(1);
e(2)=e_diag(2);

f(2)=f_diag(2)-e(2)*g(1)/f(1);
g(2)=g_diag(2)-e(2)*h(1)/f(1);
h(2)=h_diag(2);

for k=3:n-2
    e(k)=e_diag(k)-d_diag(k)*g(k-2)/f(k-2);
    f(k)=f_diag(k)-d_diag(k)*h(k-2)/f(k-2)-e(k)*g(k-1)/f(k-1);
    g(k)=g_diag(k)-e(k)*h(k-1)/f(k-1);
    h(k)=h_diag(k);
end

e(n-1)=e_diag(n-1)-d_diag(n-1)*g(n-3)/f(n-3);
f(n-1)=f_diag(n-1)-d_diag(n-1)*h(n-3)/f(n-3)-e(n-1)*g(n-2)/f(n-2);
g(n-1)=g_diag(n-1)-e(n-1)*h(n-2)/f(n-2);
e(n)=e_diag(n)-d_diag(n)*g(n-2)/f(n-2);
f(n)=f_diag(n)-d_diag(n)*h(n-2)/f(n-2)-e(n)*g(n-1)/f(n-1);


r(1)=b(1);
r(2)=b(2)-e_diag(2)*r(1)/f_diag(1);
for k=3:n
    r(k)=b(k)-d_diag(k)*r(k-2)/f(k-2)-e(k)*r(k-1)/f(k-1);
end


x(n)=r(n)/f(n);
x(n-1)=(r(n-1)-g(n-1)*x(n))/f(n-1);
for k=n-2:-1:1
    x(k)=(r(k)-g(k)*x(k+1)-h(k)*x(k+2))/f(k);
end
