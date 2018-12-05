#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b)
{
if(b==0)
	return a;
else
	return gcd(b,a%b);
}

int main()
{
long long l,t,n,i=0,res=0;
long long ch[250];
char s[251];

cin>>t;
while(t--)
{
res=0;
cin>>n;
scanf("%s\n",s);
l=strlen(s);	//scanf and char arr best , over string, since it gives junk value on iteration
//cout<<"\n";
if(!n)           //this cond. is super important!! 
{cout<<s<<"\n";
continue;
}

for(i=0;i<l;i++){
			res=(res*10 +s[i]-'0')%n;
}
//cout<<res<<"\n";
//res=stoi(s);
cout<<gcd(n,res)<<"\n";
}

return 0;
}
