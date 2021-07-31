function [root,ea,iter]=newtraph(func,dfunc,xr,es,maxit,varargin)
% newtraph: Newton-Raphson root location zeroes
% [root,ea,iter]=newtraph(func,dfunc,xr,es,maxit,p1,p2,...):
% uses Newton-Raphson method to find the root of func
% input:
% func = name of function
% dfunc = name of derivative of function
% xr = initial guess
% es = desired relative error (default = 0.0001%)
% maxit = maximum allowable iterations (default = 50)
% p1,p2,... = additional parameters used by function
% output:
% root = real root
% ea = approximate relative error (%)
% iter = number of iterations
if nargin<3,error('at least 3 input arguments required'),end
if nargin<4 || isempty(es),es=0.0001;end
if nargin<5 || isempty(maxit),maxit=50;end
iter = 0;
while (1)
    xrold = xr;
    xr = xr - func(xr)/dfunc(xr);
    iter = iter + 1;
    if xr ~= 0, ea = abs((xr - xrold)/xr) * 100; end
    if ea <= es || iter >= maxit, break, end
end
root = xr;
%y = @(x) sqrt(9.81*x/0.25)*tanh(sqrt(9.81*0.25/x)*4)-36;
%dy = @(x) 1/2*sqrt(9.81/(x*0.25))*tanh((9.81*0.25/x)^(1/2)*4)-9.81/(2*x)*sech(sqrt(9.81*0.25/x)*4)^2;
%newtraph(y,dy,140,0.00001)