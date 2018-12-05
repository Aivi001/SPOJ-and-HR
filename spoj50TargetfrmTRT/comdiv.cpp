/*#include<bits/stdc++.h>
using namespace std;


int gcd(long long a,long long b)
{
if(a==0)
	return b;
return gcd(b%a,a);

}


int main()
{

int i,n,v1,v2,cnt=0;
int num;

cin>>n;

for(i=0;i<n;i++)
{
scanf("%d %d", &v1,&v2);
num=__gcd(v1,v2);
cnt=0;
int sqr=(int)sqrt(num);
for(i=0;i<sqr;i++)
	if(num%i==0)
		cnt+=2;

cout<<cnt<<"\n";
}

return 0;
}
*/

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
 
int gcd(int a, int b) 
{
	if(b == 0)
	{
	        return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}
int solve(int A, int B) 
{
	int c = gcd(A, B), ans = 0;
	int sqt = (int) sqrt(c);
	int i;
	for(i=1;i<=sqt;i++) 
	{
		if (c%i==0) 
		{
			ans=ans+2;
			if (i*i==c)
				ans--;
 		}
	}
 return ans;
}
int main() 
{
	int n, a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
	{
		scanf("%d%d", &a, &b);
		printf("%d\n", solve(a, b));
	}
}
