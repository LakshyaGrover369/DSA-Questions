#include<iostream>
using namespace std;
int main() {
    string s,srev;
	cin>>s;
    for (int i = s.size()-1; i >=0; i--)
    {
        srev+=s[i];
    }
    if(srev==s) cout<<"true";
	else  cout<<"false";
    
	return 0;
}