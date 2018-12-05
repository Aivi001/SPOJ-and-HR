#include<bits/stdc++.h>
using namespace std;

int main()
{

long long t,n,curr,i,j=1;
vector<long long>val;

cin>>t;

while(t--)
{
	val.clear();

	cin>>n;
	long long dp[n+1]={0};  //0 needed for res in case of n=0, ans=0, if not initialise, then dp[0] has garbage val

	for(i=1;i<=n;i++)
	{

	cin>>curr;
	dp[i]=max((i>1?dp[i-1]:0),(i>2?dp[i-2]:0)+curr);  //()+curr T , (0+curr) F , since curr is added as a part of the secondary cond in ternary operator 
	}

	cout<<"Case "<<j<<": "<<dp[n]<<"\n";
	++j;

}

return 0;
}
