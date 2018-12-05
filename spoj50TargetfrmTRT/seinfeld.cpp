#include<bits/stdc++.h>
using namespace std;

int main()
{

string s;
int o=0,c=0,ans,k=1,i;

cin>>s;

while(s[0]!='-')
{
o=0;c=0;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='{')
			o++;
		else
		{
			--o;
			if(o<0)
			{
				o=1;
				++c;
			}

		
		}

	}
	
		ans=c+o/2;
	cout<<k<<". "<<ans<<"\n";
	k++;
	cin>>s;
}
return 0;
}
