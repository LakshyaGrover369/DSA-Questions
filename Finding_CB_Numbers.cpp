#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool isPrime(string s){
    long long n,i=1,count=0;
    n=stoll(s);
    // cout<<n<<" ";
    while (i<=n/2)
    {
        
        if(n%i==0){
            count++;
        } 
         i++;
    }
    if (count>1)
    {
        // cout<<"notprime ";
        return 0;
    }    
    else if(count==1)  
    {
        // cout<<"prime ";
        return 1;
    }    

}

int main() {
    long long len,idx=0;
    cin>>len;
    string s;string arr[20];
    cin>>s;

    for (int i = 0; i < len; i++)
    {
        string temp="";
        for (int j = i; j < len; j++)
        {
            temp+=(s[j]);
            if(isPrime(temp)==1)
            {
                arr[idx]=temp;
                // cout<<idx<<" "<<arr[idx]<<" \n";
                idx++;
            }
        }
        cout<<endl;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
        long long j=i+1;
        sort(arr,arr+20);
        if(arr[j].find(arr[i])==1){
            arr[j]="0";
        cout<<arr[i]<<" ";
        }
    }
    

	return 0;
}