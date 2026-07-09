#include <iostream>
#include <vector>
using namespace std;
int main() {
    pair<int, int> p = {1,2};
    cout <<p.first <<" " << p.second <<endl;

    pair <char , int> p1 = {'a' , 3};
        cout <<p1.first <<" " << p1.second <<endl;

    //pair of pair
    pair<int, pair<char,int>> p2 = {1,{'a',3}};
    cout <<p2.first <<" " << p2.second.first <<" " <<p2.second.second <<endl;


    cout <<"print vector pairs " <<endl;
    vector<pair<int, int>> vec = {{1,2},{2,3},{3,4}};
    for( pair<int,int> p : vec)
    {
        cout <<p.first <<" " <<p.second <<endl;
    }
    
    //push or emplace
    vec.push_back({4,5});
    vec.emplace_back(5,6);

    cout <<"after push and emplace" <<endl;
    for(auto p : vec)
    {
        cout <<p.first <<" " <<p.second <<endl;
    }

}
