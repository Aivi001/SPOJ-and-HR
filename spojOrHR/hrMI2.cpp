#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {

int i,common=0,l1,l2;
    
    for(i=0;i<min(s.length(),t.length());i++)
    {
        if(s[i]==t[i])
            ++common;
        else
            break;    //important cond...
     }
     l1=s.length();
     l2=t.length();
   // cout<<common<<"\n";
    //cout<<l1+l2-2*common<<"\n";
    //cout<<l1+l2-k<<"\n";
    if((l1+l2-2*common)>k)
        return "No";
    else if((l1+l2-2*common)%2==k%2)
        return "Yes";
    else if((l1+l2-k)<0)
        return "Yes";
    else
    return "No";
    
    /*
    
3 5
a b c d e 
a b c 

3+5-7 F (for k=7, not possible)
if,k=8 or above...

T since, expression has value less than zero 
    
    
    */
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
