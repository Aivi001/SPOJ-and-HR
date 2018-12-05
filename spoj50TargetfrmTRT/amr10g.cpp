#include<bits/stdc++.h>
using namespace std;

int main()
{

long long t,n,x,i,min,k;

cin>>t;

while(t--)
{
long long val[10000000];
min=9999999;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
	cin>>val[i];
	}

sort(val,val+n);

for(i=0;i<=n-k;i++)
{

if(val[i+k-1]-val[i]<min)
	min=val[i+k-1]-val[i];
//cout<<min<<" ";
	
}
cout<<min<<"\n";
//val.clear();
}
return 0;
}
