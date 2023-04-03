#include<iostream>
#include<algorithm>
using namespace std;

void targetSumTriplet(int *arr, int n, int target)
{
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {   
        if(3*arr[i]>target)    break;

		int left,right;
		int newTarget=target-arr[i];
		left=i+1;right=n-1;

        while (left < right)
        {
            if((arr[left]+arr[right])>newTarget){
                right--;
            }
            else if((arr[left]+arr[right])<newTarget){
                left++;
            }
            if((arr[right]+arr[left])==newTarget){
                if(arr[right]>arr[left])
                cout<<arr[i]<<", "<<arr[left]<<" and "<<arr[right]<<endl;
                if(arr[right]<arr[left])
                cout<<arr[i]<<", "<<arr[right]<<" and "<<arr[left]<<endl;
				right--;
				left++;
            } 
        }
    }
}

/// fix one element and it becomes the target sum pair problem

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
        targetSumTriplet(arr,n,x);
    }
	return 0;
}