#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        int r1,r2,c1,c2; cin>>r1>>c1>>r2>>c2;
        int one=r1+c1; int two=r2+c2;
        int r=abs(r1-r2); int c=abs(c1-c2);
        string result;
        if(one%2==0 & two%2==0 || one%2==1 & two%2==1)
        {
            int k=abs(r-c);
            if(k>1)
                result="2";
            else
                result="1";
        }
        else
            result="impossible";

        cout<<"Case "<<t<<": "<<result<<endl;
    }
    return 0;
}
