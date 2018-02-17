#include<bits/stdc++.h>
#define M 25
using namespace std;

int cost[M][M],color[M][M];

int X[4]={1,-1,0,0};
int Y[4]={0,0,1,-1};

int W,H,Count=0;
char mat[M][M];

void bfs(int i,int j)
{
    memset(cost,0,sizeof(cost));
    memset(color,0,sizeof(color));

    queue<int>Q;
    int ui,uj,vi,vj,k;

    Q.push(i);
    Q.push(j);

    cost[i][j]=0;
    color[i][j]=1;

    while(!Q.empty())
    {

        ui=Q.front();
        Q.pop();

        uj=Q.front();
        Q.pop();

       Count++;


        for(k=0;k<4;k++)
        {
            vi=ui+X[k];
            vj=uj+Y[k];

            if((vi>=1&&vi<=H) && (vj>=1&&vj<=W) && (mat[vi][vj]!='#'))
            {
                if(!color[vi][vj])
                {
                    Q.push(vi);
                    Q.push(vj);
                    cost[vi][vj]=cost[ui][uj]+1;
                    color[vi][vj]=1;
                }
            }
        }
    }
}
int main()
{
    int i,j,k,n,cas,p;
    cin>>cas;
    for(k=1;k<=cas;k++)
    {
        p=0;
        cin>>W>>H;
        for(i=1;i<=H;i++)
        {
            for(j=1;j<=W;j++)
            {
                cin>>mat[i][j];
            }
        }
        for(i=1;i<=H;i++)
        {
            for(j=1;j<=W;j++)
            {
                if(mat[i][j]=='@')
                {
                    bfs(i,j);
                    break;
                    p=1;
                }
            }
            if(p)
                break;
        }
        cout<<"Case "<<k<<": "<<Count<<endl;
        Count=0;
    }
    return 0;
}
