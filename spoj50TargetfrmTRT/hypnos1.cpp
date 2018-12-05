#include<bits/stdc++.h>
using namespace std;

int main()
{

long long val=0,cnt=1,interm,i=0,ans=0,a;

cin>>a;
//cout<<"Cined\n";
//cout<<a<<"\n";

while(a>0)
{
	val+=((a%10)*(a%10));
	a=a/10;	

}

//cout<<val<<" ";


while(val>9)
{
	ans=0;   //important
	//interm=val;
	while(val>0)
	{
		ans+=((val%10)*(val%10));
		val=val/10;
	}

	val=ans;
	++cnt;
}

if(val==1)
	cout<<cnt<<"\n";
else
	cout<<"-1\n";

return 0;
}
