#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int>& arr , int n)
{
    for(int i = 1; i < n ; i++)
    {
        int j = i;
        while(j>0 && arr[j]<arr[j-1])
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
    return;
}

int main() {
    vector<int> arr = {4,1,5,2,3};
    int n = arr.size();
    insertion_sort(arr,n);
    for(int i = 0 ; i<n ; i++)
    {
        cout <<arr[i] <<" ";
    }
}