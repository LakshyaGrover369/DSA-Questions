#include <iostream>
using namespace std;

 int main() {
    int n;
    cin>>n;
	if(n<1000){
		int arr[n][n];
        // ARRAY INPUT
		for(int i = 0; i < n ; i++)
		{
			for (int j = 0; j < n; j++)
			{
			cin>>arr[i][j];
			}
		}
        //FOR ROTATING SEE THE PATTERN THAT ARE MADE BY INDEXES
        for (int i = n-1; i >= 0; i--)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}