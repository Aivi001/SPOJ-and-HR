/*
#include<bits/stdc++.h>
using namespace std;
int res=0;
bool visited[51];
pair<int ,int > pi;

void bfs(vector< vector < char > >val(),int n,int m,int xi,int xj)
{
	int i;
	int xp[]={-1,-1,-1,0,0,1,1,1};
	int yp[]={-1,0,1,-1,1,-1,0,1};

	queue< pair< int,int > >Q;

	Q.push(make_pair(xi,xj));

	while(!Q.empty())
{
	pi=Q.front();
	Q.pop();

	for(i=0;i<6;i++)
{

	if(xp[i]+pi.first>=0&&xp[i]+pi.first<n&&yp[i]+pi.second>=0&&yp[i]+pi.second<m&&!visited[xp[i]+pi.first][yp[i]+pi.second])
{
	if(val[xp[i]+pi.first][yp[i]+pi.second]==val[pi.first][pi.second]+1)

	{
	Q.push_back(val[xp[i]+pi.first][yp[i]+pi.second])
	visited[xp[i]+pi.first][yp[i]+pi.second]=1;
	res++;
	}

}

}

}

}


int main()
{
memset(visited,0,sizeof(visited));
int n,m,i,j,xi,xj;
char x;
cin>>n>>m;
vector< vector<char> >val(n+1);

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
	cin>>x;
	if(x=='A')
	{xi=i;
	xj=j;
	res=1;}
	val[i].push_back(x);
}
}

	bfs(val,n,m,xi,xj);

cout<<res<<"\n";


return 0;
}
*/

// cleaner version...

#include <bits/stdc++.h>
using namespace std;
struct cow
{
	int x;
	int y;
	int dist;
};
queue<cow> q;
cow p1,p2;
const int N=60;
char a[N][N];
int px[9]={0,0,1,-1,0,1,-1,-1,1};
int py[9]={0,1,0,0,-1,1,-1,1,-1};
int ans,n,m;
int mark[N][N];
int main()
{
	int i,j,b,c,d,e,k,z,t,x,y;
	char ch;
	cin>>n>>m;
	t=0;
	while(n!=0 && m!=0)
	{
		t++;
		ans=0;
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
			cin>>a[i][j];
		for(k=0;k<n;k++)
			for(z=0;z<m;z++)
				if(a[k][z]=='A')
				{
					p1.x=k;
					p1.y=z;
					p1.dist=1;
					q.push(p1);
					while(!q.empty())
					{
						x=q.front().x;
						y=q.front().y;
						mark[x][y]=true;
						ans=max(ans,q.front().dist);
						for(i=1;i<=8;i++)
						{
							if(x+px[i]<n && x+px[i]>=0 && y+py[i]<m && y+py[i]>=0 && int(a[x+px[i]][y+py[i]])==int(a[x][y])+1 && mark[x+px[i]][y+py[i]]<8)  //marked <8 since, from A ,if get C instead of B, then after B, you wont be able to search C
							{
								p1.x=x+px[i];
								p1.y=y+py[i];
								mark[x+px[i]][y+py[i]]++;
								p1.dist=q.front().dist+1;
								q.push(p1);
							}
						}
						q.pop();
					}
				}
		cout<<"Case "<<t<<": "<<ans<<endl;
		cin>>n>>m;
	}
	
	return 0;
}
