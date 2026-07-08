#include <iostream>
#include <vector>
using namespace std;

void sortarray(vector <int>& arr , int n)
{
    for(int i = 0 ; i < n-1 ; i++)
    {
        bool check = false;
        for(int j = 0 ; j < n - i - 1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
                check = true;
            }
        }
        if(!check)
        {
            break;
        }
    }
}

int main() {
    vector<int> arr = {2,3,5,2,5,6,3,25,5};
    int n = arr.size();
    sortarray(arr , n);

    for(int i = 0  ; i < n ; i++)
    {
        cout <<arr[i]<<" " ;
    }
}