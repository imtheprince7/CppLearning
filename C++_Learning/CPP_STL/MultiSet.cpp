#include<iostream>
#include<set>
using namespace std;

class Person{
    public:
    int age;    
    string name;

    // bool operator < (const Person &rhs ) const { return  age < rhs.age;}
    
    // bool operator > (const Person &rhs ) const { return  age > rhs.age;}
    bool operator > (const Person &rhs ) const { return  name > rhs.name;}
};

int main(){
    // multiset<int> ms ={2,4,6,8,0,2,4,10,12,14,15,16,4,6,8};
    multiset<Person, greater<Person>> ms ={
        {25,"Pulkit"},  {35,"Ashish"},
        {25,"Pulkit"},  {35,"Ashish"},
        {22,"Aman"},    {24,"Sumit"}
    };

    // for(const auto &ele : ms){
    //     cout<<ele.age<<" "<<ele.name<<endl;
    // }
    
    multiset<Person> :: iterator it ;
    for(it = ms.begin(); it !=ms.end(); it++){
        cout<<(*it).age <<" "<<(*it).name<<endl;
    }

    cout<<"\nSize of multiset is:"<<" "<<ms.size()<<endl;

    return 0;
}
