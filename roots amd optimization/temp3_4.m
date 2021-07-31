function Tfin = temp3_4(Tmean,Tpeak,ti,tf)
w=2*pi/365;
t=ti:tf;
T=Tmean+(Tpeak-Tmean)*cos(w*(t-205));
Tfin=mean(T);
