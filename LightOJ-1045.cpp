#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

double lgm[1000010];
int T,t,n,b,ans;
void lom()
{
    for(long int i=1;i<=1000000;i++)
        lgm[i] =lgm[i-1]+log(i);
}

int main()
{
    lom();
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d%d",&n,&b);
        ans = (lgm[n]/(lgm[b]-lgm[b-1]))+1;
        printf("Case %d: %d\n",t,ans);
    }
    return 0;
}
