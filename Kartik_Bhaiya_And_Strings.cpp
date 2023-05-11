#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,maxi=0,mini=100001;
	string s;
	cin>>n>>s;
	int counter[1000000] ={0};
	for(int i=0;i<s.size();i++){
		counter[s[i]]++;
		if(counter[s[i]]>maxi) maxi=counter[s[i]];

	}
	mini=s.size()-maxi;
	cout<<maxi + min(mini, n);
	return 0;
}