#include<iostream>
using namespace std;
template <class T>
    T my_addition(T first_number, T second_number){
        return first_number + second_number;
    }

template <class U>
    U my_compare(U first_number, U second_number){
        return (first_number > second_number) ? first_number : second_number ;
    }

    
template <class U, class V>
    U my_multiplication(U first_number, V second_number){
        return first_number * second_number ;
    }
int main(void){
    cout<<"Template Practice."<<endl;
    
    cout<<my_addition(55, 60.88)<<endl;
    cout<<my_addition(55.8, 60)<<endl;
    cout<<my_compare(55,70)<<endl;
    cout<<my_multiplication(50, 50.87)<<endl;
    return 0;
}