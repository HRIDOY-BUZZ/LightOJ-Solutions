#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

long long f(int A[],int n)
{
    long long sum=0;
    for(int i=0;i<n;i++)
		sum+=((long long)n-1-2*i)*A[i];
    return sum;
}

int main()
{
    int T; scanf("%d",&T);
    for(int t=1;t<=T;t++)
    {
        int n,q; scanf("%d%d",&n,&q);
        int A[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
        }
        long long sum = f(A,n);

        printf("Case %d:\n",t);
        for(int i=0;i<q;i++)
        {
            int qr; scanf("%d",&qr);
            if(qr==1)
                printf("%lld\n",sum);
            else
            {
                int x,v; scanf("%d%d",&x,&v);

                sum+=((long long)n-1-2*x)*(v-A[x]);

                A[x]=v;
                //sum = f(A,n);
            }
        }
    }
    return 0;
}
