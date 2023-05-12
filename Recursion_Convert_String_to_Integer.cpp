#include<bits/stdc++.h>
using namespace std;

int string_to_intiger(string s , int &idx , int &ans){
    if(idx==s.size()) {
        cout<<ans;
        return ans;
    }
    ans*=10;
    ans+=(s[idx]-'0');
    idx++;
    string_to_intiger(s,idx,ans);
}

int main()
{
   string s;
   cin>>s;
   int idx=0,ans=0;
   string_to_intiger(s,idx,ans);
return 0;
}