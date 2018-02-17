#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    for(int t=1;t<=T;t++)
    {
        int x1,x2,y1,y2; cin>>x1>>y1>>x2>>y2;
        int M; cin>>M;

        if(x1>x2)
        {
            swap(x1,x2);
        }
        if(y1>y2)
        {
            swap(y1,y2);
        }

        cout<<"Case "<<t<<":"<<endl;
        for(int k=1;k<=M;k++)
        {
            int x,y; cin>>x>>y;

            if(x>x1 & x<x2 && y>y1 & y<y2)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
