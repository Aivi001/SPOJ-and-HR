#include <bits/stdc++.h>

using namespace std;
set<string>palSet;

bool isPal(string s)
{
    set<char>st;

    for(int i=0;i<s.length();i++)
    {
        if(st.find(s[i])==st.end())
            st.insert(s[i]);
        else
            st.erase(s[i]);
    }

    if(palSet.find(s)!=palSet.end())
        return false;
    else
        palSet.insert(s);
    return st.size()>1?false:true;
}


int main()
{
    long long q,i,j,l,r,p=0;
    string s;
    cin>>s;

    cin >> q;
    for(i=0;i<q;i++)
    {
        vector<long long>v;
        cin>>l>>r;
       // cout<<l<<" "<<r<<"\n";
        string str="";
        str=s.substr(l-1,r-l+1);
       // cout<<str<<"\n\n";
        long long l3=str.length();
        if(isPal(str))
            v.push_back(max(p,l3));
        for(j=0;j<str.length();j++)
        {
            string a=str.substr(0,j);
            string b=str.substr(j,str.length());
            //cout<<a<<" "<<b<<"\n";
            long long l1=a.length(),l2=b.length();
            
            if(isPal(a)&&isPal(b))
                v.push_back(max(p,max(l1,l2)));
                //p=max(p,max(a.length(),b.length()));
            else if(isPal(a))
                v.push_back(max(p,l1));
               // p=max(p,a.length());
            else if(isPal(b))
                v.push_back(max(p,l2));
                //p=max(p,b.length());
            else;
        }
        cout<<(count(v.begin(),v.end(),*max_element(v.begin(),v.end()))%1000000007)<<endl;
    }
    return 0;
}
