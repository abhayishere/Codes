/*	[]__________[][][][]____[][][][][]__{}__[][][][]____[][][][][]__[][][][]
    []__________[]______________[]__________[]__________[]__________[]____[]
    []__________[][][][]________[]__________[][][][]____[]__________[]____[]
    []__________[]______________[]________________[]____[]__[][][]__[]____[]
    []__________[]______________[]________________[]____[]______[]__[]____[]
    [][][][]____[][][][]________[]__________[][][][]____[][][][][]__[][][][]
*/
#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define endl '\n'
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
#define form(i, n) for(int i = 0; i <n ;i++) 
#define mp make_pair
#define pb push_back
#define sortvec(v) sort(v.begin(),v.end());
#define sortarr(a,n) sort(a,a+n);
typedef pair<int, int> pt;

const int N=55;
int n,m,k;
string s[N];
bool vis[N][N];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

int c=0,curs=0;

vector<pt> comps;
vector<pt> pos[N * N];

bool check(int i,int y)
{
    return (0<=i && i<n)&&(0<=y && y<m);
}

void dfs1(int x,int y)
{
    vis[x][y]=true;
    form(i,4)
    {
        int nx=x+dx[i],ny=y+dy[i];
        if(!check(nx,ny) || vis[nx][ny] || s[nx][ny]=='*') continue;
        dfs1(nx,ny);
    }
}

void dfs2(int x,int y)
{
    curs++;
    vis[x][y]=true;
    pos[c].push_back(mp(x,y));
    form(i,4)
    {
        int nx=x+dx[i],ny=y+dy[i];
        if(!check(nx, ny) || s[nx][ny] == '*' || vis[nx][ny]) continue;
        dfs2(nx,ny);
    }
}

void solve()
{
    cin>>n>>m>>k;
    form(i,n)
    {
        cin>>s[i];
    }
    form(i,n)
    {
        form(j,m)
        {
            if(i==0 || j==0 || i==n-1 || j==m-1)
            {
                if(s[i][j]=='.')dfs1(i,j);
            }
        }
    }
    form(i,n)
    {
        form(j,m)
        {
            if(s[i][j]=='.' && !vis[i][j])
            {
                curs=0;
                dfs2(i,j);
                comps.pb(mp(curs,c));
                c++;
            }
        }
    }
    sortvec(comps);
    int ans=0;
    form(i,c-k)
    {
        ans+=comps[i].first;
        int num=comps[i].second;
        while(!pos[num].empty())
        {
            pair<int,int>p=pos[num].back();
            pos[num].pop_back();
            s[p.first][p.second]='*';
        }
    }
    cout<<ans<<endl;
    form(i,n)
    cout<<s[i]<<endl;
}	
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
       //cin>>t;
    while(t--)
    {
        solve();
    }
}