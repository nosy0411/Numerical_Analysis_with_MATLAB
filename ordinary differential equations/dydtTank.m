function dy = dydtTank(t,y,m,k,c)
dy=[y(2);-(c*y(2)+k*y(1))/m];
end