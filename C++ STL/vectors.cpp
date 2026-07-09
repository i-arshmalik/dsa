#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec = {1,2,3};
    // size and capacity
    cout <<"size of vector = " <<vec.size() <<endl <<"capacity of vector = " <<vec.capacity() <<endl;
    //push back and pop back
    vec.push_back(4);
    vec.pop_back();
    // at() or [];
    cout <<vec.at(2) <<" or " <<vec[2] << endl;
    // front and back;
    cout<<"front = " <<vec.front() <<endl <<"back = " <<vec.back() <<endl;
    //insert
    vec.insert(vec.begin() + 1,4);
    cout <<vec[1] <<endl;
    //erase
    vec.erase(vec.begin()+1);
    cout <<vec[1] <<endl;
    //empty
    cout<<vec.empty() <<endl;
    //clear
    vec.clear();
    cout<<vec.size() <<endl;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

                            //Iterators
    // begin() and end();

    vector<int>:: iterator it;
    for(it = vec.begin() ; it != vec.end() ; it++)
    {
        cout << *(it) <<" ";
    }
    cout <<endl;
    for(auto it = vec.begin() ; it != vec.end() ; it++)
    {
        cout << *(it) <<" ";
    }

    cout <<endl;
    
    // reverse begin and reverse end

    cout<< "reverse end = ";
    for(auto it = vec.rbegin() ; it !=  vec.rend() ; it++)
    {
        cout << *(it) <<" ";
    }

}