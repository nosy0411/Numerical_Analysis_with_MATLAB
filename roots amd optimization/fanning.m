function f_val=fanning(func,xl,xu,varargin)

test=func(xl,varargin{:})*func(xu,varargin{:});

if test>0, error('no sign change'), end

for i=1:11
    xr=(xl+xu)/2;
    test=func(xl,varargin{:})*func(xr,varargin{:});
    
    if test<0
        xu=xr;
    elseif test>0
        xl=xr;
    else
       break
    end
end
f_val=xr;