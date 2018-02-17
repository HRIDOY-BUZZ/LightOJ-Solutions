#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        int a,b,c;cin>>a>>b>>c;

        if(a<b)
            swap(a,b);
        if(a<c)
            swap(a,c);
        if(b<c)
            swap(b,c);

        if((a*a) == (b*b)+(c*c))
            printf("Case %d: yes\n",t);
        else
            printf("Case %d: no\n",t);
    }
    return 0;
}
