clc,clf,clear
cd=0.25; g=9.81; v=36; t=4;
mp=linspace(50,200);
fp=sqrt(g*mp/cd).*tanh(sqrt(g*cd./mp)*t)-v;
plot(mp,fp),grid