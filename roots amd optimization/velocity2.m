function vend = velocity2(dt,ti,tf,vi)
% velocity1: Euler solution for bungee velocity
% vend = velocity1(dt,ti,tf,vi)
%        Euler method solution of bungee jumper velocity
% input:
% dt = time step(s)
% ti = initial time(s)
% tf = final time(s)
% vi = initial value of dependent variable (m/s)
% output:
% vend = velocity at tf (m/s)
t= ti;
v = vi;
h = dt;
while(1)
    if t+dt>tf, h=tf-t;end
    dvdt = deriv(v);
    v = v+dvdt*h;
    t = t+h;
    if t>=tf, break,end
end
vend=v;
end
function dv = deriv(v)
dv = 9.81 - (0.25/68.1)*v*abs(v);
end