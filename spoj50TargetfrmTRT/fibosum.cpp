#include<bits/stdc++.h>
using namespace std;

long long mult(long long a[][2],long long b[][2])  //[][2] 2 is esseintial , coz in multidim arr, only the first bound can be left blank
{
long long res[2][2];

memset(res , 0 , sizeof res);

int i,j,k;
for(i=0;i<2;i++)
	for(j=0;j<2;j++)
		for(k=0;k<2;k++)
			res[i][j]=(res[i][j]+a[i][k]*b[k][j])%1000000007;

for(i=0;i<2;i++)
	for(j=0;j<2;j++)
		a[i][j]=res[i][j];  //dont store it in a there itself , do mult separately in res and then back in a 
}

long long powerMat(long long num)
{

long long fib[2][2]={ {1,1} , { 1,0}}, temp[2][2]={{1,0} , { 0,1}};
while(num)
{
if(num&1)
	mult(temp,fib);
mult(fib,fib);

num>>=1;   //right shift itself means div by 2, so dont have as >>2, it becomes a multiplication operation on num;
}
return temp[0][1];

}

int main()
{
long long t,n,m;
cin>>t;
while(t--)
{

cin>>n>>m;
cout<<(powerMat(m+2)-powerMat(n+1)+1000000007)%1000000007<<"\n";


}

return 0;
}
