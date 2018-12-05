#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];

int maxim(int a,int b,int c)
{
if(a>b&&a>c)
return a;
else if(b>a&&b>c)
return b;
else
return c;
}

int calc(int h,int a,int cnt,bool f)
{
int i,j;
	

if( h<=0 || a<=0) return cnt;  // important and forgot!!

if(dp[h][a]!=-1)
	return dp[h][a];

else
{
	if(f)
		dp[h][a]=calc(h+3,a+2,cnt+1,!f);
	else
		dp[h][a]=max(dp[h][a],max(calc(h-5,a-10,cnt+1,!f),calc(h-20,a+5,cnt+1,!f)));

	return dp[h][a];


}

}


int main()
{
int t,h,a;
cin>>t;
bool f;
while(t--)
{
cin>>h>>a;
memset(dp,-1,sizeof(dp));
f=true;
cout<<calc(h,a,-1,f)<<"\n";
}

return 0;
}


implementation 'com.google.firebase:firebase-analytics:16.0.1'
apply plugin: 'com.google.gms.google-services:15.0.2'


