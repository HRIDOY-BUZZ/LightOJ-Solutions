#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        double r1,r2,r3;
        cin>>r1>>r2>>r3;

        double a,b,c;
        a=r1+r2;
        b=r2+r3;
        c=r3+r1;

        double s = (a+b+c)/2;

        double S = sqrt(s*(s-a)*(s-b)*(s-c));

        double X,Y,Z;

        X = acos((b*b+c*c-a*a)/(2*b*c));
        Y = acos((a*a+c*c-b*b)/(2*a*c));
        Z = acos((b*b+a*a-c*c)/(2*b*a));

        double S1 = 0.5*((Y*r1*r1)+(Z*r2*r2)+(X*r3*r3));

        double area = S-S1;

        cout<<fixed<<"Case "<<t<<": "<<setprecision(8)<<area<<endl;
    }
    return 0;
}
