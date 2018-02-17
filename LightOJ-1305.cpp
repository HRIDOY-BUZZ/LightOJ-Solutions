#include<bits/stdc++.h>
using namespace std;

int main() {
    int ax,ay,bx,by,cx,cy,dx,dy,area;
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;

        dx=ax+cx-bx;
        dy=ay+cy-by;

        area=(ax*(by-cy)+bx*(cy-ay)+cx*(ay-by));

        cout<<"Case "<<i<<": "<<dx<<" "<<dy<<" "<<(int)abs((double)area)<<endl;
    }
    return 0;
}
