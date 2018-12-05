#include<bits/stdc++.h>
using namespace std;
 
string isPossible(long long num)
{

	long long i=sqrt(num);
	long long j=0;

	if(i*i==num)
	return "Yes";

	while(j<=i)
{
	if(j*j>num)
	return "No";

	if((i*i)+(j*j)==num)
		return "Yes";

	else if((i*i)+(j*j)<num)
		j++;

	else 
		i--;

	

}
	return "No";


}

int main()
{

long long t,n,x;
cin>>n;
while(n--)
{
cin>>x;
cout<<isPossible(x)<<"\n";
}

return 0;
}
