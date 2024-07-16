#include <iostream>
#include<set>
using namespace std;


class Person{
    public:
    int age;
    string name;
    
    // bool operator < (const Person &rhs) { return age < rhs.age;  }

    bool operator > (const Person &rhs) const { return age > rhs.age;  }    
    // bool operator > (const Person &rhs) const { return name > rhs.name;  }
};

int main(){
    
    // set<Person, greater<Person>> Set = {
    //     {34,"Pawan"},  {29,"Akshu"},
    //     {40,"Rachit"}, {14,"Maya"}
    // };

    set<Person> Set = {
        {34,"Pawan"},  {29,"Akshu"},
        {40,"Rachit"}, {14,"Maya"}
    };
    
    for(const auto  it : Set){
        cout<<it.age<<" "<<it.name<<endl;
    }

    return 0;
}