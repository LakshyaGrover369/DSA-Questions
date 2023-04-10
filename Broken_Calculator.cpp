#include<iostream>
using namespace std;

void displayArray(int *arr, int size){
    for (int i = size; i >=0; i--)
    {
        cout<<arr[i];
    }
    
}
int main() {
    int n;
    cin>>n;
	if(n>=1 && n<=500){
		int fact[1500]={0};

		fact[0]=1;
		int idx=0;
		for (int i = 1; i <= n; i++)
		{
			// cout<<idx<<endl;
			int result,carry=0;
			for (int j = 0; j <= idx; j++)
			{
				result= fact[j] * i + carry;
				fact[j]=result%10;
				carry=result/10;

			}
			// cout<<carry<<" "<<result<<endl;
			while (carry>0)
			{
				idx++;
				fact[idx]=carry%10;
				carry/=10;
			}
			
		}
		displayArray(fact,idx);
	}
    
	return 0;
}