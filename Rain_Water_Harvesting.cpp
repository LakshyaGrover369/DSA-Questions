#include<iostream>
#include<algorithm>

using namespace std;


void InputArray(int *arr, int size){
    for (int i = 0; i < size; i++)  cin>>arr[i];
}

using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];

    InputArray(arr,n);

    int maxRight=arr[n-1],maxLeft=arr[0];
    int left[n],right[n];

    for (int i = 0; i < n; i++)
    {   
        if(arr[i]>maxLeft){
            maxLeft=arr[i];
        } 
        left[i]=maxLeft;
    }
    for (int i = n-1; i >=0; i--)
    {   
        if(arr[i]>maxRight){
            maxRight=arr[i];
        } 
        right[i]=maxRight;
    }
    int ans=0;

    for (int i = 0; i < n; i++)
    {   
        ans+=min(left[i],right[i])-arr[i];
    }
    cout<<ans;
	return 0;
}