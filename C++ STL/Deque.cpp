#include <iostream>
#include <deque>
using namespace std; 
int main() {
    deque<int> d = {2,3};
    //push back and push front
    d.push_front(1);
    d.push_back(4);
    d.push_back(5); 

    cout <<"after pushing = ";
    for(int val : d)
    {
        cout <<val <<" ";
    }
    cout <<endl;

    d.pop_front();
    d.pop_back();   

    cout <<"after poping = ";
    for(int val : d)
    {
        cout <<val <<" ";
    }   
    cout <<endl;
}