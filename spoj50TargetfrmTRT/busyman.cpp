#include<bits/stdc++.h>
using namespace std;

int main()
{

int t,n,i,a,b,prev,cnt=0;

cin>>t;

while(t--)
{

cin>>n;
cnt=1;
vector< pair < int ,int > > pii;
for(i=0;i<n;i++)
{

	cin>>a>>b;
pii.push_back(make_pair(b,a));  //b,a as make finish time as the first elem todo the activities that take less time
}

sort(pii.begin(),pii.end());
prev=pii[0].first;
for(i=1;i<n;i++)
{
	if(pii[i].second>=prev)
	{
	cnt++;
	prev=pii[i].first;
	}

}

cout<<cnt<<"\n";
}

return 0;
}

//bool cmp( vector< pair <long long,long long> > a,vector< pair <long long,long long> > a)
//{
	//if(a.first<b.first




//}   					not necessary
