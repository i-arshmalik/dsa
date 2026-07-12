#include <iostream>
using namespace std;

bool linearSearch(int arr[][3], int m, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == key)
                return true;
        }
    }
    return false;
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3, m = 3;
    int key = 8;
    cout << linearSearch(arr, m, n, key);
}