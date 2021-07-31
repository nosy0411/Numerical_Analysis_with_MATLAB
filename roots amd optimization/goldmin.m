function [x,fx,ea,iter]=goldmin(f,xl,xu,es,maxit,varargin)

if nargin<3, error('at least 3 input arguments required');end
if nargin<4 || isempty(es),es=0.0001;end
if nargin<5 || isempty(maxit),maxit=50;end

phi=(1+sqrt(5))/2;
iter=0;
while(1)
    d = (phi-1)*(xu-xl);
    x1=xl+d;
    x2=xu-d;
    if f(x1,varargin{:})<f(x2,varargin{:})
        xopt=x1;
        xl=x2;
    else
        xopt=x2;
        xu=x1;
    end
    iter=iter+1;
    if xopt~=0, ea=(2-phi)*abs((xu-xl)/xopt)*100;end
    if ea<=es || iter>=maxit,break,end
end
x=xopt; fx=f(xopt,varargin{:});
