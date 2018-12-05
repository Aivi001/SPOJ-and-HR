#include<bits/stdc++.h>
using namespace std;

int main()
{

long long n,x,i,j,k,ans=0,hi,lo;
vector<long long>val,s1,s2;
cin>>n;
for(i=0;i<n;i++)
{
cin>>x;
val.push_back(x);
}

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		for(k=0;k<n;k++)
		{
			s1.push_back(val[i]*val[j]+val[k]);
		}
	}
}


for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		for(k=0;k<n;k++)
		{
			if(val[k]==0) continue;  //if val[k] not just k
			s2.push_back((val[i]+val[j])*val[k]);
		}
	}
}

sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());


for(i=0;i<s1.size();i++)
{
lo=lower_bound(s2.begin(),s2.end(),s1[i])-s2.begin();
hi=upper_bound(s2.begin(),s2.end(),s1[i])-s2.begin(); //-s2.begin() important, coz it'll return a ptr otherwise
ans+=(hi-lo);

}

cout<<ans<<"\n";
return 0;
}
