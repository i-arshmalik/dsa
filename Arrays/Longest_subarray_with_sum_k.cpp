/*
source Striver's A2D DSA sheet
topic array
Approach: two pointers approach
Time Complexity: O(2n)
Space Complexity: O(1)

Que : Given an array nums of size n and an integer k,find the length of the longest sub-array
that sums to k. If no such sub-array exists, return 0.
*/
#include <iostream>
#include <vector>
using namespace std;
int longestSubarray(vector<int> &arr, int k){
    int n = arr.size();
        int i = 0 , j = 0, count = 0, ans = 0, sum = 0;
        while(j < n) 
        {
            sum += arr[j];
            j++; count++;
        
            while(sum > k && i<=j) 
            {
                sum -= arr[i];
                count--;
                i++; 
            }
            if(sum == k)
            {
                ans = max(ans, count);
            }
        }
        return ans;
    }
int main() {

    vector <int> arr  = {10, 5, 2, 7, 1, 9};
    int k = 15;
    cout <<longestSubarray(arr, k);
}