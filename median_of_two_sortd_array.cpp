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

// void mergeArray( int *arr1,int *arr2, int n){  
//         //first we merge the array by taking new array of space 2n
// 		int arr[2*n];
// 		for (int i = 0; i < 2*n; i++)
// 		{
// 			if(i<n){
// 				arr[i]=arr1[i];
// 			}
// 			else{
// 				arr[i]=arr2[i-n];
// 			}
// 		}
// 		// then we sort the array for finding medium
// 		sort(arr,arr+2*n);
// 		//after doing that mid element will always be at n-1 index of new array
// 		cout<<arr[n-1];
// }

//-----------------------------OR-----------------------------

void mergeArray( int *arr1,int *arr2, int n){  
		//first we merge the array by taking new array of space 2n 
		//for elements in right place we will compare the twoo arrays value
		int arr[2*n];
		int i = 0, j = 0, k = 0;

		// Traverse both array
		while(i<n && j<n){
			if(arr1[i]<arr2[j]){
				arr[k++]=arr1[i++]; //put the smallest value in arr
			}
			else{
				arr[k++]=arr2[j++];	//put the smallest value in arr
			}

		}
		// putting remaining elements of the array
		while(i<n){
			arr[k++]=arr1[i++];
		}
		while(j<n){
			arr[k++]=arr2[j++];
		}
			
		//after doing that midian is (arr[n-1]+arr[n])/2 of new array
		cout<<(arr[n-1]+arr[n])/2<<endl;
}

 int main() {
    int n,m;
    cin>>n;
	if(n<1000){
		int arr1[n];
		int arr2[n];
		arrayInput(arr1,n);
		arrayInput(arr2,n);
        mergeArray(arr1,arr2,n);
    }
    return 0;
} 