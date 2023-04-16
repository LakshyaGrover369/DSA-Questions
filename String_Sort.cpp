#include <iostream>
#include <algorithm>
using namespace std;

int myComparator(string s1, string s2){
    int size=min(s1.size(),s2.size());
    string ls="",rs="";
    for (int i = 0; i < size; i++)
    {   
        ls+=s1[i];
        rs+=s2[i];
    }
    if(ls==rs && s1.size()>s2.size()) return 1;
    else if(ls==rs && s1.size()<s2.size()) return 0;
	return s1<s2;
}

 int main() {
    int n;
    cin>>n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {   
        cin>>arr[i];
    }
    sort(arr,arr+n,myComparator);
    for (int i = 0; i < n; i++)
    {   
        cout<<arr[i]<<" ";
    }
    
    return 0;
}