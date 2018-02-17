#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        int me,lift,dist,time;
        cin>>me>>lift;

        if(me>lift)
            dist=me-lift;
        else
            dist=lift-me;

        time=(dist*4)+(me*4)+19;

        printf("Case %d: %d\n",t,time);
    }
    return 0;
}
