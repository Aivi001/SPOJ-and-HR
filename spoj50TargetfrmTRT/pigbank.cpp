/*
#include<bits/stdc++.h>
using namespace std;


int main()
{
int t,e,f,n,i,a,b,weight,j,ans;

cin>>t;


while(t--)
{
	weight=0;
	//vector < pair < int , int > > currwei(10000);
//vector< vector<int> >dp(10000);
	cin>>e>>f>>n;
	ans=0;
	int w[n],c[n];
	for(i=0;i<n;i++)
	{
		cin>>c[i]>>w[i];
		//currwei.push_back(make_pair(a,b));
	}
		weight=f-e;
		int dp[weight+1];
		
		//memset(dp,-1,sizeof(dp));
		dp[0]=0;
		for(i=1;i<=weight;i++)
		{
			dp[i]=-1;
			for(j=0;j<n;j++)
			{
				
				 if((w[i-1]<=j)&&dp[i-w[j]]!=-1&&(dp[i]==-1||dp[i]<=(dp[i-w[j]]+c[j])))
					dp[i]=dp[i-w[j]]+c[j];
				
				
					cout<<dp[i]<<" ";		

			}
		}
	


	cout<<dp[weight]<<"\n";

}
*/
/*
std::vector<std::vector<int>> twoDimVector(3, std::vector<int>(2, 4));
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
	cout<<twoDimVector[i][j];
	cout<<"\n";
}

44
44
44



return 0;	

}
*/
/*

#include<bits/stdc++.h>
using namespace std;

int s;
int max(int a, int b) { return (a > b)? a : a; }
int knapSack(int W, int wt[], int val[], int n){
   int i, w;
   int k[n+1][W+1];
   for(i=0;i<=W;i++)
   	k[0][i]=0;
   for (i = 1; i <= n; i++){
       for (w = 0; w <= W; w++){
           if (wt[i-1] <= w){
                 k[i][w] = max(val[i-1] + k[i-1][w-wt[i-1]],  k[i-1][w]);
                 if(w==W){
                  s=1;
                 }
    }
           else
                 k[i][w] = k[i-1][w];
             //cout<<k[i][w]<<" ";
       }
   }

   return k[n][W];
}
int main(){
 int n,i,j,ar[100000],w[100000],e,f,t;
 scanf("%d",&t);
 while(t--){
  s=0;
  scanf("%d %d",&e,&f);
  scanf("%d",&n);
  for(i=0;i<n;i++){
   scanf("%d %d",&ar[i],&w[i]);
  }
  f=f-e;
  j= knapSack(f, w, ar, n);
  if(s==1){
   printf("The minimum amount of money in the piggy-bank is %d.\n",j);
  }else{
   printf("This is impossible.\n");
  }
  
 }
 return 0;
}

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int T,E,F,N,p[500],w[500],dp[10000];
	scanf("%d",&T);
	
	for(int tc = 1;tc<=T;++tc){
		scanf("%d %d %d",&E,&F,&N);
		
		for(int i = 0;i<N;++i) scanf("%d %d",&p[i],&w[i]);
		
		F -= E;
		dp[0] = 0;
		
		for(int i = 1;i<=F;++i){
			dp[i] = -1;
			
			for(int j = 0;j<N;++j)
				if(i>=w[j] && dp[i-w[j]]!=-1 && (dp[i]==-1 || p[j]+dp[i-w[j]]<=dp[i]))
					dp[i] = p[j]+dp[i-w[j]];
				//cout<<dp[i]<<" ";
		}
		
		if(dp[F]==-1) printf("This is impossible.\n");
		else printf("The minimum amount of money in the piggy-bank is %d.\n",dp[F]);
	}	
	
	return 0;
}

