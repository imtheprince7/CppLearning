#include<bits/stdc++.h>
using namespace std;
// Template Function:-   To avoid the function overloading mechanism.
//                       We have to write multiple Same_Name Function to take different data-type to perform the action.
//                      By Using "Template_Function we can write one Generic_Function and it wooul accept any kind of data-type to perform action.

template <class T>

void show(T a, T b){
        cout<<"Showing Different data-Type values from one-method"<<endl;
        cout<<"a =  "<<a <<" b =  "<<b <<endl;
}

int main(){

    show(10, 23);
    show(10, 23.5f);
    show(10,11);
    show(10,23);


    return 0;
}