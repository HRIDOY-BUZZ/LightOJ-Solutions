#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        ull s,x,y;
        cin>>s;

        ull m,n,k;
        n=ceil(sqrt(s));
        m=n*n;
        k=m-n+1;
        if(s>k)
        {
            x=n;
            y=m-s+1;
        }
        else if(s<k)
        {
            x=s-m+(2*n)-1;
            y=n;
        }
        else
            x=y=n;

        if(m%2==0)
            cout<<"Case "<<t<<": "<<x<<" "<<y<<endl;
        else
            cout<<"Case "<<t<<": "<<y<<" "<<x<<endl;
    }
    return 0;
}
