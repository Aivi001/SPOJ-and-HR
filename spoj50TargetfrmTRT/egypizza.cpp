#include<bits/stdc++.h>
using namespace std;

int main()
{

long long t,a1=0,a2=0,a3=0,ans=0;
char s[10];

cin>>t;
while(t--)
{
cin>>s;
if(s[2]=='2')
	++a2;
else if(s[0]=='3')
	++a3;
else
	++a1;

}
//cout<<"a1 "<<a1<<"a2 "<<a2<<"a3 "<<a3<<"\n";
a1-=a3;

ans+=a3;

if(a2>1)
{
ans+=(a2-(a2%2))/2;
if(a2%2)
	{a1-=2;
++ans;  //here!
}

}
else 
ans+=a2;

if(a1>4)
{
ans+=(a1-(a1%4))/4;

if(a1%4>0)
	ans++;
}
else if(a1>0)
ans+=1;
else;

cout<<ans+1<<"\n";

return 0;
}
