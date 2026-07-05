/*
Problem: Union of Two Sorted Arrays
Source: Striver's A2Z DSA Sheet
Topic: Arrays
Approach: Two Pointers
*/
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size() , n2 = nums2.size();
        vector<int> ans;
        int i = 0 , j = 0;
        while(i < n1 && j < n2)
        {
            if( i+1 < n1 && nums1[i] == nums1[i+1]) 
            {
                i++;
            }            
            else if( j+1 < n2 && nums2[j] == nums2[j+1]) 
            {
                j++;
            }            
            else if(nums1[i] == nums2[j])
            {
                if(ans.empty() || ans.back() != nums1[i])
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else{
                if(nums1[i] < nums2[j])
                {
                    if(ans.empty() || ans.back() != nums1[i])
                    ans.push_back(nums1[i]);
                    i++;
                }
                else{
                    if(ans.empty() || ans.back() != nums2[j])
                    ans.push_back(nums2[j]);
                    j++;
                }
            }
        }
        while(i < n1)
        {
            if(ans.empty() || ans.back() != nums1[i])
            ans.push_back(nums1[i]);
            i++;
        }
        while(j < n2)
        {
            if(ans.empty() || ans.back() != nums2[j])
            ans.push_back(nums2[j]);
            j++;
        }
        return ans;
    }
};