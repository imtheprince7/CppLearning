#include<iostream>
#include<memory>

using namespace std;


int main(){
    const int ab = 10;
    const int *bc = &ab;
    int *de = const_cast<int*>(bc);

    *de = 100;  // Invalid & Undefined Behaviour
    cout<<"Value of de is:  "<<*de <<endl;
    cout<<"Value of bc is:  "<<*bc <<endl;
    cout<<"Value of ab is:  "<<ab <<endl;

    

    int a1 = 100;
    const int *b1 = &a1;
    int *c1 = const_cast<int*>(b1);

    *c1 = 150;  // Valid & Defined Behaviour
    cout<<endl;
    cout<<"Value of a1 is:  "<<a1 <<endl;
    cout<<"Value of b1 is:  "<<*b1 <<endl;
    cout<<"Value of c1 is:  "<<*c1 <<endl;


    return 0;
}