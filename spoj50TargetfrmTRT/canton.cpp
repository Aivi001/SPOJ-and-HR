#include<bits/stdc++.h>
using namespace std;

int main()
{


long long i,j,k=1,cnt=0,val,num,deno,t;

cin>>t;

while(t--)
{
cin>>val;
cnt=0;
k=1;
for(i=1;i<=10000;i++)
{
	for(j=0;j<k;j++)
	{
		if(cnt==val)
		cout<<"TERM "<<cnt<<" IS "<<num<<"/"<<deno<<"\n";
		if(i&1)
		{
			num=k-j;
			deno=j+1;
			
		}

		
		else
		{
			num=j+1;
			deno=k-j;
			
		}
		++cnt;
	}
		k++;
}

}
return 0;
}
