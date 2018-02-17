#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int

ull fn[10005];

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
            int n;
            cin>>fn[0]>>fn[1]>>fn[2]>>fn[3]>>fn[4]>>fn[5]>>n;
                for(int i=6;i<=n;i++)
                {
                    fn[i]=(fn[i-1]+fn[i-2]+fn[i-3]+fn[i-4]+fn[i-5]+fn[i-6])%10000007;
                }
            printf("Case %d: %lld\n",t,fn[n]%10000007);
    }
    return 0;
}
