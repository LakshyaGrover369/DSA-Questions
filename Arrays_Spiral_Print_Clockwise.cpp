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
		int sr=0,er=m-1,sc=0,ec=n-1;
        while(sr <= er && sc <= ec)
        {
			// cout<<"i="<<i<<endl;
          
                for (int j = sc; j <= ec; j++)
                {
                    cout<<arr[sr][j]<<", ";
					// cout<<"j="<<j<<endl;
                }

				sr++;
            
                for (int j = sr; j <= er ; j++)
                {
                    cout<<arr[j][ec]<<", ";
					// cout<<"j="<<j<<endl;
                }
				ec--;
				if(sr<=er)
				{
					for (int j = ec; j >= sc ; j--)
					{
						cout<<arr[er][j]<<", ";
						// cout<<"j="<<j<<endl;
					}
					er--;
				}
				if(sc<=ec)
				{
						for (int j = er; j >= sr ; j--)
					{
						cout<<arr[j][sc]<<", ";
						// cout<<"j="<<j<<endl;
					}
					sc++;
				}
        }
		cout<<"END";

    }
    return 0;
}