#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        int a,b; cin>>a>>b;
        int c,d,res; a--;
        c=(a/3)*2;
        if(a%3==2)
            c++;
        d=(b/3)*2;
        if(b%3==2)
            d++;
        res= d-c;
        printf("Case %d: %d\n",t,res);
    }
    return 0;
}
