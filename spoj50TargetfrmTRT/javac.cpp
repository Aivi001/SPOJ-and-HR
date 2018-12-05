#include<bits/stdc++.h>
using namespace std;



bool isJava(string s)
{
int i;
	for(i=0;i<s.size();i++)
	if(s[i]=='_')
	return false;
if(s[0]<='Z')
	return false;
	
	return true;
}

bool isCpp(string s)
{
	int i;

	for(i=0;i<s.size();i++)
	if(s[i]<='Z')
	return false;
	
	for(i=0;i<s.size()-2;i++)
	if(s[i]=='_'&&s[i+1]=='_')
	return false;
	
	if(s[s.size()-1]=='_'||s[0]=='_')
	return false;

return true;

}

string makeIntoCpp(string s)
{
int i;	
char ch;
	for(i=0;i<s.length();i++)
{
	if(s[i]<='Z')
	{ ch=s[i];
	//s.erase(i,1);   no need!
	s.insert(i,"_");
	//s.insert(i,ch);
	s[i+1]=ch+32;	
	}
	
	
}

	return s;
}

string makeIntoJava(string s)
{

int i;

for(i=0;i<s.length();i++)
{char ch;
	if(s[i]<='_')
	{
	s.erase(i,1);
	s[i]=s[i]-32;
	}
}

return s;

}

int main()
{


ios_base::sync_with_stdio(false);

string s;

while(!cin.eof())
{
cin>>s;
if(isJava(s))
cout<<makeIntoCpp(s)<<"\n";
//cout<<"Java\n";
else if(isCpp(s))
cout<<makeIntoJava(s)<<"\n";
//cout<<"Cpp\n";
else
cout<<"Error\n";

}

return 0;
}
