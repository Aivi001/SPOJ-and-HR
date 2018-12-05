#include<bits/stdc++.h>
using namespace std;

int main()
{
long long a,d,i,x;
vector<long long>aval,dval;
cin>>a>>d;

while(a!=0 && d!=0)
{
aval.clear();
dval.clear();
for(i=0;i<a;i++)
{
	cin>>x;
	aval.push_back(x);
}

for(i=0;i<d;i++)
{

	cin>>x;
	dval.push_back(x);
}

sort(aval.begin(),aval.end());
sort(dval.begin(),dval.end());

if(aval[0]<dval[1])//&&dval[0]<=dval[1])  this cond is not necessary as it gets covered in the usual one itself ... #weFoundOut
cout<<"Y\n";
else
cout<<"N\n";

cin>>a>>d;
}
return 0;
}
