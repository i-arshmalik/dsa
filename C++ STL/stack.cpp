#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    //top
    cout <<s.top() <<endl;


    //isempty
    while(! s.empty())
    {
        cout <<s.top() <<" ";
        s.pop();
    }
    cout <<endl;

    //size
    cout <<s.size() <<endl;

    s.push(1);
    s.push(2);
    s.push(3);

    //swap
    cout<<"swap ke phle s ka size = " <<s.size() <<endl;

    stack<int> s2;
    s2.swap(s);
    cout <<"swap ke baad s ka size = " <<s.size() <<endl; 
    cout <<"s2 ka size = " <<s2.size(); 
}
