#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        double r1,r2,h,p;
        cin>>r1>>r2>>h>>p;
        cout<<"Case "<<t<<": ";
        double hb = ((2*r1)-(2*r2))/2;
        double ha = sqrt((h*h)+(hb*hb));
        double signtheta = h/ha;
        double pa = p/signtheta;
        double pb = sqrt((pa*pa)-(p*p));
        double R  = ((2*r2)+(2*pb))/2;
        double volume = (pi*p*((R*R)+(R*r2)+(r2*r2)))/3;
        cout<<fixed<<setprecision(9)<<volume<<endl;
    }
    return 0;
}
