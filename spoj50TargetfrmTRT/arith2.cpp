/*
#include<bits/stdc++.h>
using namespace std;

int main()
{

long long t,ans,num1,num2;
char exp,exp1;

cin>>t;

while(t--)
{
	stack<long long>s;
	cin>>exp;

	while(exp!='=')
	{

			
		 if (exp=='+')
			{
				num1=s.top();
				s.pop();
				cin>>exp1;
				num2=exp1-'0';
				ans=num1+num2;
				s.push(ans);
			}

		else if (exp=='-')
			{
				num1=s.top();
				s.pop();
				cin>>exp1;
				num2=exp1-'0';
				ans=num1-num2;
				cout<<num1<<" "<<exp<<" "<<num2<<" "<<ans<<"\n";
				s.push(ans);
			}



		else if (exp=='/')
			{
				num1=s.top();
				s.pop();
				cin>>exp1;
				num2=exp1-'0';
				ans=num1/num2;
				s.push(ans);
			}

	
		else if (exp=='*')
			{
				num1=s.top();
				s.pop();
				cin>>exp1;
				num2=exp1-'0';
				ans=num1*num2;
				s.push(ans);
			}
		
		else
			s.push(exp-'0');

		cin>>exp;
	}

		if(exp=='=')
		cout<<s.top()<<"\n";
		s.pop();



}

return 0;
}
*/

#include <iostream>

using namespace std;

int main(void)
{
    int tc;
    int flag=1;
    long long num1,num2,ans,count;
    char op;

    cin>>tc;
   
     while(tc--)
    {
        flag=1;
        count=0;
        while(flag) //flag checks if '=' is encountered
        {
        count++;
        if(count==1) //count determines if the expression is starting or we are in  middle of the expression to be solved
        {
        //get the expression
        cin>>num1;
        }
        else
        num1=ans;
       
        op=' '; //as expression contains many spaces this is where we avoid spaces
        while(op == ' ')
            cin>>op;
        if(op=='=')
        {
            cout<<ans<<"\n";
            flag=0;
        }
        else
            cin>>num2;
       
        switch(op)
        {
            case  '+' : ans=num1+num2;
                    break;
            case  '-' : ans=num1-num2;
                    break;
            case  '*' : ans=num1*num2;
                    break;
            case  '/' : ans=num1/num2;
                    break;
            default : break;
        }
       
       
        }//while
    }
        return 0;
       
}    
