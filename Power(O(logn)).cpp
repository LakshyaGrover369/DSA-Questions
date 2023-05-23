//////////////////// normal power function /////////////////
// #include<iostream>
// #include<algorithm>
// #include<math.h>
// using namespace std;

// int powerOfNumber(int x , int n ){
// 	int ans;
// 	ans=pow(x,n);
// 	return ans;
// }
// int main() {
// 	int x,n;
// 	cin>>x>>n;
// 	cout<<powerOfNumber(x,n);
// 	return 0;
// }

//////////////////// logic of power function /////////////////


// #include<iostream>
// #include<algorithm>
// #include<math.h>

// using namespace std;

// int powerOfNumber(int x , int n ){
// 	int ans=1;
// 	for(int i=0;i<n/2;i++){
// 		ans*=x;
// 	}
// 	ans*=ans;
// 	if (n%2!=0 ) ans*=x;
// 	// ans=pow(x,n);
// 	return ans;
// }
// int main() {
// 	int x,n;
// 	cin>>x>>n;
// 	cout<<powerOfNumber(x,n);
// 	return 0;
// }


//////////////////// logic of power function with recursion  /////////////////
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int powerOfNumber(int x , int &n , int &ans){
	n--;
	ans*=x;
	if(n==0)	return 0;
	powerOfNumber(x,n,ans);
	return ans;
}
int main() {
	int x,n,count=0,ans=1;
	cin>>x>>n;
	powerOfNumber(x,n,ans);
	cout<<ans;
	return 0;
}