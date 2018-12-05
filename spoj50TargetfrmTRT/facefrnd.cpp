#include<bits/stdc++.h>
using namespace std;

int main()
{

long long n,m;
string x;
set<string>f;
set<string>fof;
set<string>::iterator it,it1;
long long cnt=0;

cin>>n;

while(n--)
{
cin>>x;
f.insert(x);

cin>>m;
if(fof.find(x)!=fof.end())
fof.erase(x);
while(m--)
{
	cin>>x;
	if(f.find(x)==f.end())
	fof.insert(x);

}


}

cout<<fof.size()<<"\n";

return 0;
}
