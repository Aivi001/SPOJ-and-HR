#include<bits/stdc++.h>
using namespace std;

int main()
{

long long n,m,i,x,start=0,sum=0,max=0;
vector<long long>val;

cin>>n>>m;

for(i=0;i<n;i++)
{
cin>>x;
val.push_back(x);
sum+=x;

while(sum>m){
if(start<=i)
sum-=val[start++];
}
if(sum>max)
max=sum;

}
cout<<max<<"\n";
return 0;
}
