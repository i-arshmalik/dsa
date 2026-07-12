#include <iostream>
#include <climits>
using namespace std;

int linearSearch(int arr[][3], int m, int n, int key)
{
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int rowsum = 0;
        for(int j = 0; j < m; j++)
        {
            rowsum += arr[i][j];
        }
        maxsum = max(maxsum, rowsum);
    }
    return maxsum;
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3, m = 3;
    int key = 8;
    int ans = linearSearch(arr, m, n, key);
    cout <<ans;
}