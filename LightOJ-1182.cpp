#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
using namespace std;

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n,sum=0;  cin>>n;
        for(int i=1;n>0;i++)
        {
            int a=n%2;
            n/=2;
            sum+=a;
        }
        if(sum%2==0)
            cout<<"Case "<<t<<": "<<"even"<<endl;
        else
            cout<<"Case "<<t<<": "<<"odd"<<endl;
    }
    return 0;
}
