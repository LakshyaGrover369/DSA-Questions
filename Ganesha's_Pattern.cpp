#include<iostream>
using namespace std;

int main() {

	int n;
	cin>>n;

	for(int i=0;i<n/2;i++)
	{
		for(int j=0;j<n;j++)
		{
			if( j==0) cout<<"*";
			else if(i==0 && j>=n/2) cout<<"*";
			else if(i!=0 && j==n/2) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
	for(int i=n/2;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==n/2) cout<<"*";
			else if(j==n/2) cout<<"*";
			else if(i==n-1 && j<=n/2) cout<<"*";
			else if(j==n-1) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}