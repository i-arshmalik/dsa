    #include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<string,int> m;
    
    m.emplace("tv",100);
    m.emplace("tv",1);
    m.emplace("tv",22);

    m.erase(m.find("tv"));
    
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
    
