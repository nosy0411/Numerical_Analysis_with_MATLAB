function CDout = Drag(ReCD,ReIn)
x=ReCD(1,:);y=ReCD(2,:);
CDout=interp1(x,y,ReIn,'pchip');