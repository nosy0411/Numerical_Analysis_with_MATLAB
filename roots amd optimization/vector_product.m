function [theta,c,c_mag]=vector_product(a,b)
c=cross(a,b);
c_mag=norm(c);
theta=acos(dot(a,b)/(norm(a)*norm(b)))*180/pi;
plot3([0,a(1)],[0,a(2)],[0,a(3)],'--r',[0,b(1)],[0,b(2)],[0,b(3)],'--g',[0,c(1)],[0,c(2)],[0,c(3)],'-b');
xlabel('x-axis');ylabel('y-axis');zlabel('z-axis');
legend('a=vector(a)','b=vector(b)','c=vector(c)');
title('Vector Product','FontSize',20);
grid;
