#include<bits/stdc++.h>
using namespace std;

int main()
{
    double pi=2*acos(0.0);
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        double r;
        cin>>r;

        double circle=pi*r*r;
        double rectangle=4*r*r;
        double shade=rectangle-circle;

        printf("Case %d: %.2lf\n",t,shade);
    }
    return 0;
}
