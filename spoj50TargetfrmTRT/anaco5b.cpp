#include<bits/stdc++.h>
using namespace std;

int main()
{

long long i,j,x,n,m,res1=0,res2=0,res=0;
vector<long long>l1,l2;
cin>>n;

while(n)
{
for(i=0;i<n;i++)
{
cin>>x;
l1.push_back(x);
}

cin>>m;

for(j=0;j<m;j++)
{
cin>>x;
l2.push_back(x);
}

i=0;j=0;
while(i<n&&j<m)
{

if(l1[i]<l2[j])
	res1+=l1[i++];

else if(l2[j]<l1[i])
	res2+=l2[j++];
else
{
//cout<<"equal";
res1+=l1[i++];
res2+=l2[j++];
res1=res2=max(res1,res2);
}

}


if(i>=n)
{
//cout<<"i>n";
	while(j<m)
	res2+=l2[j++];
}
else if(j>=m)
{
//cout<<"j>m";
	while(i<n)
	res1+=l1[i++];
}

//cout<<"res la irruken";
cout<<max(res1,res2)<<"\n";


res1=res2=res=0;
l1.clear();
l2.clear();
cin>>n;
}


return 0;
}
