function [eval, evect] = powereig(A,es,maxit)
n=length(A);
evect=ones(n,1);eval=1;iter=0;ea=100; %initialize
while(1)
    evalold=eval; %save old eigenvalue value
    evect=A*evect; %determine eigenvector as [A]*{x)
    eval=max(abs(evect)); %determine new eigenvalue
    evect=evect./eval; %normalize eigenvector to eigenvalue
    iter=iter+1;
    if eval~=0, ea = abs((eval-evalold)/eval)*100; end
    if ea<=es || iter >= maxit,break,end
end