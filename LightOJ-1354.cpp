#include<iostream>
using namespace std;

int D2Bi(int n)
{
    int mul=1,result=0;
    while(n>0)
    {
        result+=n%2*mul;
        mul*=10;
        n/=2;
    }
    return result;
}

int main()
{
    int T, d1, d2, d3, d4, b1, b2, b3, b4;
    char ch;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>d1>>ch>>d2>>ch>>d3>>ch>>d4;
        cin>>b1>>ch>>b2>>ch>>b3>>ch>>b4;

        if(D2Bi(d1)==b1 && D2Bi(d2)==b2 && D2Bi(d3)==b3 && D2Bi(d4)==b4)
             cout<<"Case "<<i<<": "<<"Yes"<<endl;
        else
             cout<<"Case "<<i<<": "<<"No"<<endl;
    }
    return 0;
}
