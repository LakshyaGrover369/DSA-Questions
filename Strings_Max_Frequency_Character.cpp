#include<iostream>
#include<climits>

using namespace std;

int main(){
	string s;
	cin>>s;
	int max=INT_MIN,index;
	int freq[26]={0};
	for(int i=0;i<s.size();i++){
		int count=s[i]-'a';
		freq[count]+=1; 
	}          

	for(int i=0;i<26;i++){
		if(max<freq[i]){
			max=freq[i];
		}

	}   
	// cout<<max;
	for(int i=0;i<26;i++){
		if(max==freq[i]){
			cout<<(char)(i+'a')<<" ";
		}
	}   
		
	return 0;
}