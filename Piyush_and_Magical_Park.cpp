#include<iostream>
using namespace std;

int main()
{

int n,m,s,k;

cin>>n; // no. of rows
cin>>m; // no. of column
cin>>k;
cin>>s;
char arr[100][100];

for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		cin>>arr[i][j];
	}
}

for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{ 
		if(s<=k){
		 	cout<<"No\n";
			return 0;
		}
		if (arr[i][j]=='.'){
                 s-=2;
		}
			
		if (arr[i][j]=='#'){
				break;
		}
			
		if (arr[i][j]=='*'){
			  s+=5;
		}
		if(j==m-1){
			s+=1;
		}
		s-=1;
	}
}
if(s>k) cout<<"Yes\n"<<s<<endl;
// else cout<<"No \n";

return 0;
}