#include <iostream>
#include <algorithm>
using namespace std;

void arrayInput( int **arr , int m, int n){  
    for(int i = 0; i < m ; i++){
        for (int j = 0; j < n; j++)
        {
         cin>>arr[m][n];
            
        }
        
    }
}

// void arrayOutput( int *arr, int n){  
//     for(int i = 0; i < n ; i++){
//          cout<<arr[i]<<", ";
//     }
// }
void columnWavePrint( int **arr,int m, int n){  
        
}

 int main() {
    int n,m;
    cin>>m;
    cin>>n;
	if(m<10 && n<10){
		int arr[m][n];
		arrayInput(arr,m,n);
        columnWavePrint(arr,m,n);
    }
    return 0;
}