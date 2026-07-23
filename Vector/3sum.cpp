#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int> &A)
{
    int n = A.size();
    vector<vector<int>> ans;

    set<vector<int>> s;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (A[i] + A[j] + A[k] == 0)
                {
                    vector<int> triple = {A[i], A[j], A[k]};
                    sort(triple.begin(), triple.end());
                    if (s.find(triple) == s.end())
                    {
                        s.insert(triple);
                        ans.push_back(triple);
                    }
                }
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> A = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(A);

    for (vector<int> val : ans)
    {
        for (int x : val)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
