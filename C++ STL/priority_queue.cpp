    #include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int , vector<int> , greater<int> > q;
    q.push(5);
    q.push(7);
    q.push(10);
    q.push(3);

    //top
    cout <<q.top() <<endl;
    
    //empty 
    while(!q.empty())
    {
        cout <<q.top() <<" " ;
        q.pop();
    }
    cout <<endl;
}
    
