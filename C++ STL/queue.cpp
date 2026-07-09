    #include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    //front
    cout <<q.front() <<endl;

   //isempty and pop

    while(!q.empty())
    {
        cout <<q.front() <<" ";
      q.pop();
    }
    cout <<endl;

    q.push(1);
    q.push(2);
    q.push(3);

    cout <<"q ka size swap se phle = " <<q.size() <<endl;

    queue<int> q2;
    q2.swap(q);
    cout <<"q ka size swap ke baad " <<q.size() <<endl;
    cout <<"q2 ka size " <<q2.size();
}
    
