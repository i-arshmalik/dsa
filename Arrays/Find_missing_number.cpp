/*
problem Find missing number 
source Striver's A2D DSA sheet
topic array
Approach: Sum Formula
Time Complexity: O(n)
Space Complexity: O(1)
 */
#include <iostream>
#include <vector>
using namespace std;

    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long long s1 = n*(n+1)/2;
        long long s2 = 0;
        for(int i = 0 ; i < n ; i++)
        {
            s2 += nums[i];
        }
        return s1-s2;
    }
int main()
{
    vector<int> nums = {0, 1, 2, 4, 5, 6};
    cout <<missingNumber(nums);
}
