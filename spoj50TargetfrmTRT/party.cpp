#include<bits/stdc++.h>
using namespace std;

int main()
{

long long W,n,ans;

cin>>W>>n;

while(n&&W)
{

long long cost[n+1],fun[n+1],dp[n+1][W+1];
for(int i=0;i<n;i++)
{
	cin>>cost[i]>>fun[i];
}

for(int i=0;i<=n;i++)		//<=
{
	for(int w=0;w<=W;w++)  //<=
	{
		if(i==0||w==0)
			dp[i][w]=0;
		else if(cost[i-1]<=w)
		{
			if(dp[i-1][w]>=(dp[i-1][w-cost[i-1]]+fun[i-1]))
				dp[i][w]=dp[i-1][w];
			else
				dp[i][w]=dp[i-1][w-cost[i-1]]+fun[i-1];
	
		}

		else
			dp[i][w]=dp[i-1][w];

	}

	

}
ans=-1;
for(int j=0;j<=W;j++)
{
	if(dp[n][j]==dp[n][W])
	{
		ans=j;
		break;
	}
}

cout<<ans<<" "<<dp[n][W]<<"\n";
cin>>W>>n;
}

return 0;
}
