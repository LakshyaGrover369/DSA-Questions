#include <iostream>
#include <algorithm>
using namespace std;

void arrayInput( int *arr , int n){  
    for(int i = 0; i < n ; i++){
         cin>>arr[i];
    }
}
void arrayInsertion( int *arr , int n , int m , int start){  
    for(int i = start; i < n ; i++){
         arr[i]+=m;
    }
}
void arrayOutput( int *arr, int n){  
    for(int i = 0; i < n ; i++){
         cout<<arr[i]<<" ";
    }
}
void intersectionArray( int *arr1,int *arr2, int n){  
        sort(arr1,arr1+n);
        sort(arr2,arr2+n);
        int count=0,arr[n];  
    for (int i = 0; i < n ; i++)
    {    
        for (int j = count; j < n; i++)
        {
           if(arr1[i]==arr2[j]) {
            count++;
            // cout<<arr2[j]<<",";
            arrayInsertion(arr,n,arr2[j],count);
    
           }
        }
            
    }
    arrayOutput(arr,n);
}

 int main() {
    int n;
    cin>>n;

	if(n>=1){
		int arr1[n];
		int arr2[n];
		arrayInput(arr1,n);
		arrayInput(arr2,n);
        intersectionArray(arr1,arr2,n);
    }
    return 0;
}





