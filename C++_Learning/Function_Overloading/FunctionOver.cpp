// C++ program to access overridden function
// in main() using the scope resolution operator ::

#include <iostream>
using namespace std;

class Parent {
public:
    void GeeksforGeeks()
    {
        cout << "Base Function" << endl;
    }
};

class Child : public Parent {
public:
    void GeeksforGeeks()
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
     Child Child_Derived;
     Child_Derived.GeeksforGeeks();

    // access GeeksforGeeks() function of the Base class
     Child_Derived.Parent::GeeksforGeeks();
    return 0;
}
