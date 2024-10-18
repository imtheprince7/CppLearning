#include<iostream>
using namespace std;

    // CONST Keyword on Function overloading in C++
//Points:
    // C++ allows to overload member function on the basis of const and non-const
    // Const parameters allows to overload member functions and normal function but it should be reference/pointer.
    

class Test{
    public:
    int x;
    Test(int x =0) : x{x} { }

    void print(int first){ cout<<"value First:  "<<first<<endl; }
    void print(int second) const{ cout<<"value Second:  "<<second<<endl;  }
};
int main(){
    Test test;
    test.print(400);

    const Test test2;
    test2.print(100);

    // int first = 10;
    // const int second = 20;
    // test.print(&first);
    // test.print(&second);
    return 0;
}


