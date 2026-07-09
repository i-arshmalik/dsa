#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(1);

    for(auto val : s)
    {
        cout <<val <<" ";
    } 
    cout <<endl;

    //lowerbound
    cout <<"lower bound of 4 = " << *(s.lower_bound(4)) <<endl;

    //upperbound
    cout <<"upper bound of 4 = " << *(s.upper_bound(4));
}


