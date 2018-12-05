
/*
#include<bits/stdc++.h>
using namespace std;
long long dp[10000][2];


long long mini(long long a,long long b,long long c,long long d=0)
{

if(a>b&&a>c&&a>d)
return a;

else if(b>a&&b>c&&b>d)
return b;

else if(d>a&&d>b&&d>c)
return d;

else
return c;

}



int main()
{
memset(dp,0,sizeof(dp));
long long n,i,x,j;

cin>>n;

vector< vector < long long > > vec(n+1);

//for(i=0;i<n;i++)
	//vec[i].clear();

for(i=0;i<n;i++)
{
	for(j=0;j<2;j++)
	{
	cin>>x;
	vec[i].push_back(x);

	}

	
}

for(i=0;i<n;i++)
{
	for(j=0;j<2;j++)
	{

	if(i==0&&j==0)
	{
		dp[i][j]+=vec[0][0];
		continue;
	}

	else if(i==0)
	{

	if(j==1)
		dp[i][j]=vec[i][j];
	else
		dp[i][j]=vec[i][j]+dp[i][j-1];
	}

	
	else 
	{

	if(j==0)
	{

	if(i==1)
		dp[i][j]=vec[i][j]+vec[i-1][j+1];

	else

		dp[i][j]=vec[i][j]+(min(dp[i-1][j],dp[i-1][j+1]));
	}	
	
	else if(j==1)
		if(i==1)
	dp[i][j]=vec[i][j]+(mini(0,dp[i-1][j],dp[i-1][j+1],dp[i][j-1]));
		else
		dp[i][j]=vec[i][j]+(mini(dp[i-1][j-1],dp[i-1][j],dp[i-1][j+1],dp[i][j-1]));


	else
		dp[i][j]=vec[i][j]+(mini(dp[i-1][j-1],dp[i-1][j],dp[i][j-1]));

	}

	}

}

cout<<dp[n-1][1]<<"\n";

return 0;
}

*/

// cleaner version, hence bug proof
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
 int i=1;
 while(1) {
  int n;
  cin >>n;
  if(n==0)
   return 0;
  int a[n][3];
  for (int i=0;i<n;i++)
   cin >>a[i][0]>>a[i][1]>>a[i][2];
  cout<<i<<". ";
  if(n==1)
   cout<<a[0][1]<<endl;
  else {
                                                               // Initialisation Step
   a[1][0] += a[0][1];
   a[0][2] += a[0][1];
   a[1][1] += min(min(a[1][0],a[0][1]),a[0][2]);
   a[1][2] += min(min(a[0][2],a[0][1]),a[1][1]);
   

                                                                 // Calculating the remaing nodes
   for(int i  = 2 ; i<n;i++)
   {
    a[i][0] += min(a[i-1][0],a[i-1][1]);
    a[i][1] += min(min(min(a[i][0],a[i-1][0]),a[i-1][1]),a[i-1][2]);
    a[i][2] += min(min(a[i][1],a[i-1][1]),a[i-1][2]);
   }
   cout <<a[n-1][1]<<endl;
   i++;
  }
 }
return 0;
}
