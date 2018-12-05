#include<bits/stdc++.h>
using namespace std;
int p[1000][1000];
int px[5]={0,1,-1,0,0};
int py[5]={0,0,0,1,-1};
queue< pair < int ,int > > Q;
pair<int ,int> val;

int main()
{

int t,n,m,i,j,x,y;
char c;


cin>>t;

while(t--)
{
cin>>n>>m;

for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	{cin>>c;
p[i][j]=c-'0';
if(p[i][j]==1)
{
p[i][j]=-1;
Q.push(make_pair(i,j));
}
}

while(!Q.empty())
{
val=Q.front();
Q.pop();
x=val.first;
y=val.second;

for(i=0;i<6;i++)
{
if(x+px[i]>=0&&x+px[i]<n&&y+py[i]>=0&&y+py[i]<m&&(p[x+px[i]][y+py[i]]==0))  //==0 and <=m
{
	p[x+px[i]][y+py[i]]=p[x][y]+1;
	if(p[x][y]==-1)
	++p[x+px[i]][y+py[i]];
	Q.push(make_pair(x+px[i],y+py[i]));
}
}





}
	for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
if(p[i][j]==-1)
cout<<"0 ";
else
cout<<p[i][j]<<" ";
cout<<"\n";
}
}
return 0;
}
