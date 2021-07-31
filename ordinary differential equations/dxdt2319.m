function dx = dxdt2319(t,x,k1,k2,m1,m2,w1,w2,L1,L2)
dx = [x(3);x(4);-k1/m1*(x(1)-L1)+k2/m1*(x(2)-x(1)-w1-L2); ...
-k2/m2*(x(2)-x(1)-w1-L2)];