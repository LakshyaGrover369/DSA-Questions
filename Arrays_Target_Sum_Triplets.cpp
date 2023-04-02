#include<iostream>
using namespace std;
void targetSumTriplet(int *arr, int n, int target)
{
    int left,right,mid;
    for (int i = 0; i < n; i++)
    {
        left=i;right=n-1;
        while (left < right)
        {
            mid=(left+right)/2;
            if((arr[right]+arr[mid]+arr[left])==target){
                
                cout<<min(arr[left],arr[mid],arr[right])<<" "<<arr[mid]<<" and "<<min(arr[left],arr[mid],arr[right])<<endl;
                
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
        targetSumTriplet(arr,n,x);
    }
	return 0;
}