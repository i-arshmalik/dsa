#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int>& arr , int n)
{
    for(int i = 0 ; i< n; i++)
    {
        int minidx = i;
        for(int j = i+1 ; j < n ; j++)
        {
            if(arr[j] < arr[minidx])
            {
                minidx = j;
            }
        }
        if(minidx != i)
        {
            swap(arr[minidx] , arr[i]);
        }
    }
    return ;
}

int main() {
    vector<int> arr = {4,1,5,2,3};
    int n = arr.size();
    selection_sort(arr,n);
    for(int i = 0 ; i<n ; i++)
    {
        cout <<arr[i] <<" ";
    }
}