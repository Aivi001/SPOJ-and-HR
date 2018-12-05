#include<bits/stdc++.h>
using namespace std;

int main()
{

long long t,n,m,x,i,j,res;
cin>>t;
while(t--)
{
vector<long long> v1,v2;
res=3000000;
cin>>n;
for(i=0;i<n;i++)
{
	cin>>x;
	v1.push_back(x);

}
cin>>m;
for(j=0;j<m;j++)
{
cin>>x;
v2.push_back(x);
}
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());   //must!!!
i=0;j=0;
while(i<n&&j<m)
{
if(abs(v1[i]-v2[j])<res)
res=abs(v1[i]-v2[j]);

if(v1[i]>v2[j])
j++;

else
i++;

}
cout<<res<<"\n";
}

return 0;
}
