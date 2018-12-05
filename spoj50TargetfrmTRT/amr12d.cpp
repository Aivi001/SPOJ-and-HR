#include<bits/stdc++.h>
using namespace std;

bool isPal(string s)
{
	int len=s.length();
	int k=len/2;
	
for(int i=0;i<k;i++)
{
	if(s[i]==s[len-i-1])
	continue;
	else
	return false;
}
return true;


}

int main()
{

int t;
string s;

cin>>t;

while(t--)
{
cin>>s;
if(isPal(s))
cout<<"YES\n";
else
cout<<"NO\n";


}

return 0;
}
