    #include <iostream>
#include <map>
using namespace std;

int main() {
    map<string,int> m;
    m["tv"] = 100;
    m["zebra"] = 5; 
    m["laptop"] = 100;
    m["mobile"] = 50;
    m["apple"] = 500;

    cout <<m["zebra"] <<endl;

    for(auto p : m)
    {
        cout <<p.first <<" " <<p.second <<endl;
    }

    //insert or emplace
    cout <<"after insertion" <<endl;

    m.insert({"camera",25});
    m.emplace("balloon" , 40); 
        for(auto p : m)
    {
        cout <<p.first <<" " <<p.second <<endl;
    }

    //count
    cout <<m.count("apple") <<endl;

    // erase
    cout <<"after erase one key " <<endl;
    m.erase("tv");
    for(auto p : m)
    {
        cout <<p.first <<" " <<p.second <<endl;
    }

    //find
    if(m.find("apple") != m.end())
    {
        cout <<"apple found";
    }
    else {
        cout <<"apple not found";
    }
    
    //size , empty
}
    
