#include <iostream>
#include <algorithm>
using namespace std;

void arrayInput( int *arr , int n){  
    for(int i = 0; i < n ; i++){
         cin>>arr[i];
    }
}

// void arrayOutput( int *arr, int n){  
//     for(int i = 0; i < n ; i++){
//          cout<<arr[i]<<", ";
//     }
// }
void mergeArray( int *arr1,int *arr2, int n){  
        //first we merge the array by taking new array of space 2n
		int arr[2*n];
		for (int i = 0; i < 2*n; i++)
		{
			if(i<n){
				arr[i]=arr1[i];
			}
			else{
				arr[i]=arr2[i-n];
			}
		}
		// then we sort the array for finding medium
		sort(arr,arr+2*n);
		//after doing that mid element will always be at n-1 index of new array
		cout<<arr[n-1];
}

 int main() {
    int n,m;
    cin>>n;
	if(n>=1){
		int arr1[n];
		int arr2[n];
		arrayInput(arr1,n);
		arrayInput(arr2,n);
        mergeArray(arr1,arr2,n);
    }
    return 0;
}