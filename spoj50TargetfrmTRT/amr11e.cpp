#include<bits/stdc++.h>
using namespace std;

int main()
{
long long i,j,k,t,n;
int m[1002]={0};
long long a[267200]={0};
//memset(a,0,sizeof(a));


for(i=2;i<267100;i++)
{
if(!a[i])
{
	for(j=2*i;j<2671;j+=i)   //2*j to capture the prime factors of numbers cancelled once already and dont stop with sqrt, coz shd get 3 multiples
	{

		a[j]++;


	}


}

}

j=0;
for(i=30;i<267100&&j<1001;i++)
{

if(a[i]>=3)
{
	m[j++]=i;  //here... its i since, i is the value and a[i] is the occurence	

}

}

cin>>t;
while(t--)
{
cin>>n;
cout<<m[n-1]<<"\n";
}

return 0;
}
