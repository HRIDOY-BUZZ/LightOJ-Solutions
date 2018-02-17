#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int a,b,c;
        cin>>a;
        b=a/2;
        c=a-b;
        cout<<b<<" "<<c<<endl;
    }
    return 0;
}
