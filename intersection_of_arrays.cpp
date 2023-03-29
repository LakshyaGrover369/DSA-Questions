#include <iostream>
#include <algorithm>
// #include <math.h>
using namespace std;

void arrayInput( int *arr , int n){  
    for(int i = 0; i < n ; i++){
         cin>>arr[i];
    }
}
int reverseNum(int n){
	int temp,revNum=0;
	while(n>0){
		temp=n%10;
		n/=10;
		revNum=(revNum*10)+temp;
	}
	return revNum;
}
void arrayOutput( int *arr, int n){  
    for(int i = 0; i < n ; i++){
         cout<<arr[i]<<", ";
    }
}
void insertionArray( int *arr1,int *arr2, int n){  
        sort(arr1,arr1+n);
        sort(arr2,arr2+n);
        int count=0,arr[n],num=0,temp,temp2=0;  
		cout<<"[";
	for (int i = 0; i < n ; i++)
    {   
        for (int j = count; j < n; j++)
        {
           if(arr1[i]==arr2[j]) {
            count++;
			num=arr1[i]+(num*10);
            break;
           }
        }
            
    }
			// cout<<num<<endl;
	num=reverseNum(num);
			// cout<<num<<endl;
	while(num>0){
			temp2++;
		  temp=num%10;
		  num/=10;
		  cout<<temp;
		  if(temp2!=count) cout<<", ";
	}
    // arrayOutput(arr,n);
	cout<<"]";
}

 int main() {
    int n,m;
    cin>>n;
	if(n>=1){
		int arr1[n];
		int arr2[n];
		arrayInput(arr1,n);
		arrayInput(arr2,n);
        insertionArray(arr1,arr2,n);
		// arrayOutput(arr,n);
    }
    return 0;
}