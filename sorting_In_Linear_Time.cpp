#include<iostream>
using namespace std;

void inputArray(int array[], int n){
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
}

void displayArray(int array[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<"\n";
    }
    cout<<endl;
}
int getMax(int array[], int n){
    int max=INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        if(array[i]>max) max=array[i];
    }
    // cout<<max<<endl;
    return max;
}
void countSort(int array[], int n){
    int output[n];
    int max,i,j;
    max=getMax(array,n);

    int count[(max+1)];

    for (int i = 0; i <= max; i++)
    {
        count[i]=0;
    }

    // cout<<"* ";
    // displayArray(count,max+1);

    for (int i = 0; i <= n-1; i++)
    {
        count[array[i]]++;
    }

    // cout<<"# ";
    // displayArray(count,max+1);

   i=0;//countt array
   j=0;

    while(i<=max){
        if(count[i]>0){

        array[j]=i;
        count[i]--;
        j++;
        }
        else i++;
        
    }
    //  cout<<"# ";
    // displayArray(count,max+1);
    //  cout<<"@ ";
    // displayArray(output,n);

}
int main(){

    int n;
    cin>>n;
    if(n>=1 && n<=1000000){
        int array[n];
        inputArray(array,n);
        countSort(array,n);
        displayArray(array,n);
    }

    return 0;
}