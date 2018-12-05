#include<bits/stdc++.h>
using namespace std;

int main()
{

long long t,n,k,ans,i;

cin>>t;

while(t--)
{
cin>>n>>k;
n=n-1;k=k-1;
if(n-k<k)
k=n-k;
ans=1;
for(i=0;i<k;i++)
	ans=ans*(n-i)/(i+1);
cout<<ans<<"\n";
}

return 0;
}
