#include<stdio.h>
#include<math.h>

int main()
{
    int T; scanf("%d",&T);
    for(int t=1;t<=T;t++)
    {
        int m,n,p;
        scanf("%d%d",&m,&n);

        if(m>n)
        {
        int t=m;
            m=n;
            n=t;
        }
        if(m==1)
        {
            p=n;
        }
        else if(m==2)
        {
            if(n==2)
                p=m*n;
            else if(n%2!=0)
                p=n+1;
            else if(n%2==0)
            {
                int a=n/2;
                if(a%2!=0)
                    p=(a+1)*2;
                else
                    p=n;
            }
        }
        else
        {
            int a=m*n;
            double x=a/2.0;
            p=ceil(x);
        }
        printf("Case %d: %d\n",t,p);
    }
    return 0;
}
