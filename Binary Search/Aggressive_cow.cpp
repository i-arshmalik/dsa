 /* Que : assign c cows to n stalls such that min distance between them is largest possible.
 return largest minimum distance.  2<= c <= n.
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

bool isPossible(vector<int> &arr, int n, int c, int min_allowed_distance)
{
    int cows = 1, last_stall_pos = arr[0]; 
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - last_stall_pos >= min_allowed_distance)
        {
            cows++;
            last_stall_pos = arr[i];
        }
        if(cows == c) return true;
    }
     return false;   
}

int mini(vector<int> &arr, int n, int c)
{
    sort(arr.begin(),arr.end());
    int max = arr[n-1], min = arr[0];
    int l = 1, r = max - min;         //possible range of min last_stall_pos = l to r.
    int ans = -1;
    while (l <= r)
    {
        int mid = l +  (r - l) / 2;
        if (isPossible(arr, n, c, mid))   //search on right side
        {
            ans = mid;
            l = mid + 1;
        }
        else                        // search on left side
        {
            r = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector <int> arr = {1, 2, 8, 4, 9};
    int n = 5, c = 3;
    cout << mini(arr, n, c);
    return 0;
}