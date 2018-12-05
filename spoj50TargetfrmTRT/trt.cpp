#include<bits/stdc++.h>
using namespace std;

long long dp[10000][10000];

long long calc(vector<long long> &val,long long start,long long end,long long year)
{
if(start>end)   //this is important, illena, SEGFAULT
	return 0;
	if(dp[start][end]!=0)
		return dp[start][end];

	dp[start][end]=max((calc(val,start+1,end,year+1)+year*val[start]),calc(val,start,end-1,year+1)+year*val[end]);

return dp[start][end];

}

int main()
{

long long n,i,x;
vector<long long>val;

//memset(dp , -1 , sizeof dp);
cin>>n;

for(i=0;i<n;i++)
{	cin>>x;
	val.push_back(x);
}

cout<<calc(val,0,n-1,1)<<"\n";


return 0;
}
