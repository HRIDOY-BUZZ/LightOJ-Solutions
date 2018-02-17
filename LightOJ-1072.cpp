#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define ui unsigned int
#define ud unsigned double

int main()
{
    double pi=acos(-1);
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        double R,n,r,sn; cin>>R>>n;
        sn=sin(pi/n);
        r=(R*sn)/(1+sn);
        int ir=r;
        if(ir==r)
        {
            printf("Case %d: %d\n",t,ir);
        }
        else
        {
            printf("Case %d: %.10lf\n",t,r);
        }
    }
    return 0;
}
