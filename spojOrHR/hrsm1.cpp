#include <bits/stdc++.h>


using namespace std;

string isValid(string s) {
long long i,cnt=1;
    if(s.length()==1)
        return "YES";
    vector<long long>v;
    sort(s.begin(),s.end());
    
    for(i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
            ++cnt;
        else
        {
            v.push_back(cnt);
            cnt=1;
        }
    }
    v.push_back(cnt);

    //sort(v.begin(),v.end());
    //for(i=0;i<v.size();i++)
      ///  cout<<v[i]<<" ";
    //cout<<"\n";
    //if(v[0]==v[v.size()-2]&&(v[v.size()-1]-v[0])<2)
    
    long long min=*min_element(v.begin(),v.end());
    long long max=*max_element(v.begin(),v.end());
    
    long long cmin=count(v.begin(),v.end(),min);
    long long cmax=count(v.begin(),v.end(),max);
    cout<<min<<" "<<max<<" "<<cmin<<" "<<cmax<<"\n";
    
    if(min==max)
        {cout<<"ones";
            return "YES";
        }
    if(cmin+cmax!=v.size())
        {cout<<"twono";
        return "NO";
    }
    if(cmin==1){
        cout<<"threes";
        return "YES";
    }
    if(cmax==1&&((max-1)==min)){
        cout<<"fours";
        return "YES";
    }
    
    return "NO";
}
int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    cin>>s;

    string result = isValid(s);

    cout << result << "\n";

    //fout.close();

    return 0;
}
