#include<bits/stdc++.h>
using namespace std;

int main()
{

long long t,a,b,x,i,j;
vector<int>val;
string s;
cin>>t;

while(t--)
{
val.clear();
cin>>s>>b;
a=s[s.length()-1]-'0';
j=a;
a%=10; // optimisation
if(b==0)
cout<<"1\n";

else
{
for(i=0;i<4;i++)
{
	j%=10;
	//cout<<"a vals "<<j<<"\n";
	val.push_back(j);
	j*=a;
	
}
//cout<<val[0]<<" "<<val[1]<<" "<<val[2]<<" "<<val[3]<<"\n";

x=b%4;

if(x==0)
cout<<val[3]<<"\n";
else
cout<<val[x-1]<<"\n";
}

}

return 0;
}
