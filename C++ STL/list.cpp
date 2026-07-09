#include <iostream>
#include <list>
using namespace std; 
int main() {
    list<int> l = {2,3};
    //push back and push front
    l.push_front(1);
    l.push_back(4);
    l.push_back(5); 

    cout <<"after pushing = ";
    for(int val : l)
    {
        cout <<val <<" ";
    }
    cout <<endl;

    l.pop_front();
    l.pop_back();   

    cout <<"after poping = ";
    for(int val : l)
    {
        cout <<val <<" ";
    }   
    cout <<endl;
}