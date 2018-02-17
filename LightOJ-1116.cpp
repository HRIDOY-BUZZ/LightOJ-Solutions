#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        bool f=false;
        ll w,ekka,dokka; cin>>w;
        for(ll i=2;i<=w/2;i*=2)
        {
            if(w%i==0)
            {
                ekka=w/i;
                if(ekka%2==1)
                {
                    dokka=w/ekka;
                    f=true;
                    break;
                }
            }
        }
        if(f)
            cout<<"Case "<<t<<": "<<ekka<<" "<<dokka<<endl;
        else
            cout<<"Case "<<t<<": "<<"Impossible"<<endl;
    }
    return 0;
}
