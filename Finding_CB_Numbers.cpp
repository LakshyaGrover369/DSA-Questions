#include<bits/stdc++.h>
using namespace std;
bool cbCheck(long long sub , int start , int end){
    if(sub==0 || sub==1) return false;
    int x[]={2,3,5,7,11,13,17,19,23,29};
    for(int i = 0 ; i < 10 ; i++)    if(sub==x[i]) return true;
    for(int i = 0 ; i < 10 ; i++)    if(sub%x[i]==0) return false;
  return true;
}
bool isValid(bool *visited , int start , int end){
   for(int i = start ; i < end ; i++)
   {
      if(visited[i]) return false;
   }
   return true;
}

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool visited[100]={false};
    int count=0;

    for (int len = 1; len < s.size(); len++)
    {
        for (int pos = 0; pos < s.size(); pos++)
        {
            int end=len+pos;
            string sub=s.substr(pos,len);
            if(cbCheck(stoll(sub),pos,end) && isValid(visited,pos,end)){
                count++;
                for (int i = pos; i < end; i++)
                {
                    visited[i]=true;
                }
            }
        }
    }
    cout<<count;
	return 0;;
}