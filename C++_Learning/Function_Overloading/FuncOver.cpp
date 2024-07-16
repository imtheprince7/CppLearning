// C++ program to access overridden function using pointer
// of Base type that points to an object of Derived class


#include <iostream>
using namespace std;

class Parent {
    public:
    virtual void GeeksforGeeks(){
        cout << "Base Function" << endl;
    }
};

class Child : public Parent {
    public:
    void GeeksforGeeks() override {
        cout << "Derived Function" << endl;
    }
};

int main(){
//     Child Child_Derived;
// // pointer of Parent type that points to derived1
//     Parent *parent = &Child_Derived;
    
//     parent->GeeksforGeeks();


    Child child;
    child.Parent::GeeksforGeeks();



    return 0;
}