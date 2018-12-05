#include<bits/stdc++.h>
using namespace std;

int main()
{

long long n,i,x,tVal,area,maxi;

cin>>n;

while(n)
{

area=0;maxi=0;
vector<long long>v;
stack<long long>s;
for(i=0;i<n;i++)
{ cin>>x;
v.push_back(x);
}
i=0;
while(i<n)
{
if(s.empty()||v[i]>=v[s.top()])
 s.push(i++);

else
{		//no need while loop here, let it do again on its own 
tVal=s.top();
s.pop();  //important!!

area=v[tVal]*(s.empty() ? i : i-s.top()-1);  //not -tVal, since it isnt der (tVal)

maxi=max(maxi,area);

}

}

while(!s.empty())       //forgot this
{
	tVal=s.top();
s.pop();
area=v[tVal]*(s.empty()?i:i-s.top()-1);   //

maxi=max(maxi,area);
}

cout<<maxi<<"\n";
cin>>n;
}

return 0;
}
