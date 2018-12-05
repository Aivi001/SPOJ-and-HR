/*#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
char s[100];
map<string,long long>acc;
map<string,long long>::iterator it;
long long t,n,i;

cin>>t;
while(t--)
{
cin>>n;
cout<<"\n";

for(i=0;i<n;i++)
{
gets(s);
acc[(string)s]++;

}
for(it=acc.begin();it!=acc.end();it++)
	cout<<it->first.c_str()<<" "<<it->second<<"\n";
if(t>1)cout<<"\n";
}

return 0;
}

*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;
string a[100002];
int main()
{
	int t,n,k,i,j,b,c;
	cin>>t;
	for(k=1;k<=t;++k)
	{
		cin>>n;
		for(i=0;i<n;++i)
			getline(cin,a[i]);
		sort(a,a+n);
		b=1;
		for(i=0;i<=n;i++)
			if(a[i]==a[i+1])
				++b;
			else
			{
				cout<<a[i]<<" "<<b<<endl;
				b=1;
			}
	}
}
