#include<bits/stdc++.h>
using namespace std;
int main()
{
    string inp;
    int m,money;
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        money=0;
        cout<<"Case "<<t<<":"<<endl;
        int n; cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>inp;
            if(inp=="report")
            {
                cout<<money<<endl;
            }
            else if(inp=="donate")
            {
                cin>>m;
                money+=m;
            }
        }
    }
    return 0;
}
