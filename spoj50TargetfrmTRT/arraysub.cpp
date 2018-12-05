#include<bits/stdc++.h>
using namespace std;
deque<long long>lis;
vector<long long>val,res;
int main()
{

long long n,x,i,max,top,k;
cin>>n;


for(i=0;i<n;i++)
{
cin>>x;
val.push_back(x);
}
cin>>k;
for (int i = 0; i < k; i++) {
    while (!lis.empty() && val[i] >= val[lis.back()])
      lis.pop_back();
    lis.push_back(i);
  }


for(i=k;i<n;i++)
{
res.push_back(val[lis.front()]);

while(!lis.empty() && val[lis.back()]<=val[i])
	lis.pop_back();
	


while(!lis.empty() && lis.front()<=(i-k))  //<= !!
	lis.pop_front(); 
//imortant concept, visualise and then do , not pop_back, front!!
lis.push_back(i);


}
res.push_back(val[lis.front()]);  //

for(i=0;i<res.size();i++)
	cout<<res[i]<<" ";
cout<<"\n";

return 0;
}
