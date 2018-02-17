#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        long int n;
        cin>>n;
         long int num,digit,rev = 0;
         num=n;
         do
         {
             digit=num%10;
             rev=(rev*10)+digit;
             num=num/10;
         }while(num!=0);

         if(n==rev)
           cout<<"Case "<<i<<": Yes"<<endl;
         else
           cout<<"Case "<<i<<": No"<<endl;
    }
    return 0;
}
