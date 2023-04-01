#include<bits/stdc++.h>
using namespace std;
void targetSum(int *arr, int n, int target)
{
    int left,right;
    for (int i = 0; i < n; i++)
    {
        left=i;right=n-1;
        while (left < right)
        {
            if(arr[left]>=target){
                left++;
            }
            else if(arr[right]>=target){
                right--;
            }
            if((arr[right]+arr[left])==target){
                if(arr[right]>arr[left])
                cout<<arr[left]<<" and "<<arr[right]<<endl;
                if(arr[right]<arr[left])
                cout<<arr[right]<<" and "<<arr[left]<<endl;
            }
            right--;
        }
    }
}
int main() {
	int n;
	cin>>n;
    if(n>1 && n<1000){
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int x;
        cin>>x;
        targetSum(arr,n,x);
    }
	return 0;
}