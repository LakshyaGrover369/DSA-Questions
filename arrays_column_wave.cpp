#include <iostream>
#include <algorithm>
using namespace std;

 int main() {
    int n,m;
    cin>>m;
    cin>>n;
	if(m>1 && n>1 && m<10 && n<10){
		int arr[m][n];

		for(int i = 0; i < m ; i++)
		{
			for (int j = 0; j < n; j++)
			{
			cin>>arr[i][j];
			}
		}
        for (int i = 0; i < n; i++)
        {
			// cout<<"i="<<i<<endl;
            if(i%2==0)
			{
                for (int j = 0; j < m; j++)
                {
                    cout<<arr[j][i]<<", ";
					// cout<<"j="<<j<<endl;
                }
            }
            else
			{
                for (int j = m-1; j >= 0; j--)
                {
                    cout<<arr[j][i]<<", ";
					// cout<<"j="<<j<<endl;
                }
            }
        }
		cout<<"END";

    }
    return 0;
}