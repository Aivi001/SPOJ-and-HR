#include<bits/stdc++.h>
using namespace std;

int main()
{

long long val=0,cnt=0,interm,i=0,ans=0,a;

cin>>a;
cout<<"Cined\n";
cout<<a<<"\n";

while(a>0)
{
	cout<<a<<" ";
	val+=((a%10)*(a%10));
	a=a/10;	

}

cout<<val<<" ";

while(val>9)
{
	interm=val;
	while(interm>0)
	{
		ans+=((interm%10)*(interm%10));
		interm/=10;
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
