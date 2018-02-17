#include<stdio.h>

int main()
{
    int T; scanf("%d",&T);
    for(int t=1;t<=T;t++)
    {
        int n; scanf("%d",&n);
        int ara[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
            if(ara[i]<=0)
                sum+=0;
            else
                sum+=ara[i];
        }
        printf("Case %d: %d\n",t,sum);
    }
    return 0;
}
