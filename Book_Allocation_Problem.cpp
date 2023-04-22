#include<iostream>
using namespace std;

bool check(int *arr,int n, int s, int maxPages){
	int c_sum=0;
	int c_student=1;
	for(int i=0;i<n;i++){
		if(c_sum+arr[i]<=maxPages){
			c_sum+=arr[i];
		}
		else
		{
			c_student++;
			if(c_student>s) return false;

			c_sum=arr[i];
		}
	}
	return true;
}

void solve(){
	int n,s;
	cin>>n>>s;
	int arr[n];

	int maxElement=0,sum=0;

	for(int i=0;i<n;i++){
		cin>>arr[i];
		maxElement=max(maxElement,arr[i]);
		sum+=arr[i];
	}

	int ans=1e9;

	int start=maxElement,end=sum;
	
	while(start<=end){

		int mid=(start+end)/2;

		if(check(arr,n,s,mid)){
			ans=mid;
			end=mid-1;
		}
		else start=mid+1;
	}
	cout<<ans<<endl;
}
int main() {
	int t;
	cin>>t;

	while(t--)	solve();

	return 0;
}