#include<iostream>
#include<algorithm>
#include <string>
using namespace std;

int myComparator(string s1, string s2)
{
    // int size;
    // if(s1>s2)  size=s2.size();
    // else if(s1<s2)     size=s1.size();
    // else if(s1==s2)   return 1;

    // for (int i = 0; i < size ; i++)
    // {
    //     if(s1[i]>s2[i])
    //     {
    //         return 1;
    //         break;
    //     }
    //     else if(s2[i]>s1[i])
    //     {
    //         return 0;
    //         break;
    //     }
    // }
    // if(s1.size()>s2.size()) {
    //     cout<<s1<<" "<<s1.size()<<endl;
    //     return 1;
    // }
    // else if(s2.size()>s1.size()) 
    // {
    //     cout<<s2<<" "<<s2.size()<<endl;
    //     return 1;
    // }
    string a,b;
    a=s1.append(s2);
    b=s2.append(s1);
    return a.compare(b)>0;
}

int main()
{
    int n,t;string ans="";
    cin>>t;
    if(t>=1 && t<=100)
    {
        for (int j = 0; j < t; j++)
        {
            cin>>n;
            if(n>=1 && n<=100)
            {
                string array[n];
                for (int i = 0; i < n; i++)
                {
                    cin>>array[i];
                }
                sort(array,array+n,myComparator);
                for (int i = 0; i < n; i++)
                {
                    ans+=array[i];
                }
                cout<<ans;
            }
        }
    }
	return 0;
}