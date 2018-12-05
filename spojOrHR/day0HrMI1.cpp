#include<bits/stdc++.h>
using namespace std;

int main()
{

long long n,m,i,prod,carry=0,j;
cin>>n;

vector<long long>v;

v.push_back(1);

for(j=1;j<=n;j++)
{

for(i=0;i<v.size();i++)
{
	prod=v[i]*j+carry;
	v[i]=prod%10;
	carry=prod/10;

}
	while(carry)
	{
		v.push_back(carry%10);
		carry/=10;
	}

}

reverse(v.begin(),v.end());

for(i=0;i<v.size();i++)
cout<<v[i];
cout<<"\n";

	return 0;
}

