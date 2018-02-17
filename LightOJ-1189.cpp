#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long ar[]= {1,1,2,6,24,120,720,5040,40320,362880,
    3628800,39916800,479001600,6227020800,
    87178291200,1307674368000,20922789888000,
    355687428096000,6402373705728000,121645100408832000};
        long long i,j,T;
        cin>>T;

    for(j=1;j<=T;j++)
        {
            long long n;
            cin>>n;
            int ara[200];
            long long counter=0,sum=0;
            for(i=19; i>=0; i--)
            {
                if(sum==n)
                break;
                else if(sum<n)
                {
                    sum+=ar[i];
                    if(sum<=n)
                {

                    ara[counter]=i;
                    counter++;
                }
                    else
                    sum=sum-ar[i];
                }

            }
            cout<<"Case "<<j<<": ";
            if(sum==n)
            {
                for(int k=counter-1; k>0; k--)
                {
                    cout<<ara[k]<<"!+";
                }
                cout<<ara[0]<<"!"<<endl;
            }
            else
                cout<<"impossible"<<endl;
        }
    return 0;
}
