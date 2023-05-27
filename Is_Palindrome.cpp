#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

void arrayInput(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

bool isPalindrome(int *arr, int n, int &idxStart, int &idxEnd)
{
    if (idxStart > idxEnd)
        return true;

    if (arr[idxStart] != arr[idxEnd])
        return false;
    idxStart++;
    idxEnd--;
    return isPalindrome(arr, n, idxStart, idxEnd);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    arrayInput(arr, n);
    int idxStart = 0, idxEnd = n - 1;
    isPalindrome(arr, n, idxStart, idxEnd) ? cout << "true" : cout << "false";

    return 0;
}