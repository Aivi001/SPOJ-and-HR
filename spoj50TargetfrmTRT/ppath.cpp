#include<bits/stdc++.h>
using namespace std;
int pcheck[10001];
int visit[10001];
int parent[10001];
bool check(int num)
{
if(pcheck[num])
	return false;
else
	return true;

}

void solve()
{
int i,k;
	for(i=2;i<100;i++)
{
	if(!pcheck[i])
	for(k=i*i;k<10000;k+=i)
		pcheck[k]=1;
}


}

void convToArr(int num,int arr[])
{
	
for(int i=0;i<4;i++)
{
arr[i]=num%10;
num/=10;
}

}

int convToNum(int arr[])
{


int num=0;
for(int i=0;i<4;i++)
num+=(num*10)+arr[i];

return num;
}

int main()
{

int cnt=0;
memset(pcheck,1,sizeof(pcheck));
solve();



long long t;
int s,d,k,num,arr[4],j,inter;
cin>>t;
while(t--)
{
queue<int>Q;
memset(parent,-1,sizeof(parent));
memset(visit,-1,sizeof(visit));  // must be -1,to check possibility

cnt=0;
cin>>s>>d;
num=s;
visit[s]=0;  //
parent[s]=0; //
Q.push(s); //

while(!Q.empty())  //you thought ,but didnt do this
{
num=Q.front();
Q.pop();

for(k=3;k>=0;k--)
{
convToArr(num,arr);

for(j=0;j<=9;j++)
{

	arr[k]=j;
	inter=convToNum(arr);
if(check(inter)&&inter>1000&&inter<=9999&&visit[inter]==-1)
	{
	visit[inter]=visit[num]+1; //change visit into dist to get optimal ans, if directly cnt, then you count all possibilities
	parent[inter]=num; //to print
	Q.push(inter);
	}

}

}

}

cout<<visit[d]<<"\n";
}

return 0;
}

//this doesn't work -_-
