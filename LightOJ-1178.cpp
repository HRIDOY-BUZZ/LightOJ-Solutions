#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    int T;
    double a,b,c,d,s,h,area,result;

    cin>>T;

    for(int i=1;i<=T;i++)
    {
        cin>>a>>b>>c>>d;
        s=(d+b+a-c)/2;
        area=sqrt(s*(s-d)*(s-b)*(s-a+c));
        h=(2*area)/(fabs(a-c));
        result=((a+c)*h)/2;

        cout<<"Case "<<i<<": "<<setprecision(8)<<result<<endl;;
    }

    return 0;
}
