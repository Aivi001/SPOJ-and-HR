#include<bits/stdc++.h>
using namespace std;

int main()
{

long long t,n,f,i,x,sum,frnd,j=1,flag=0;
vector<long long>val;

cin>>t;

while(t--)
{
sum=0;frnd=0;flag=0;
val.clear();

cin>>n>>f;

for(i=0;i<f;i++)
{
	cin>>x;
	val.push_back(x);
}
	
sort(val.begin(),val.end());

for(i=val.size()-1;i>=0;i--)
{
	sum+=val[i];
	++frnd;
	if(sum>=n)
	{
		cout<<"Scenario #"<<j<<":\n"<<frnd<<"\n";
		flag=1;
		break;


	}

}
if(flag==0)
cout<<"Scenario #"<<j<<":\nimpossible\n";	
++j;
}
return 0;
}
