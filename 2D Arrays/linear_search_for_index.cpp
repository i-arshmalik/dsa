#include <iostream>
using namespace std;

pair<int,int> linearSearch(int arr[][3], int m, int n, int key)
{
    pair<int,int> ans {-1,-1};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == key)
                { ans.first = i;
                ans.second = j;
                return ans; }
        }
    }
    return ans;
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3, m = 3;
    int key = 8;
    pair<int,int> ans = linearSearch(arr, m, n, key);

        cout <<ans.first <<" " <<ans.second <<endl;
}