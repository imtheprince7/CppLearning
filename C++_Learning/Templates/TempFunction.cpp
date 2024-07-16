#include<iostream>
using namespace std;
template <typename T>

T getMaxElement(T first, T second){
    return (( first > second) ? first : second);
   
}
template <class U, class V>
U getMinElement (U first, V second){
    return (( first < second) ? first : second);   
}

int main(void){

    // int first_number = 75, second_number = 20;
    char first_number= 'd', second_number = 'i';
    // int result = getMaxElement(first_number, second_number);
    int result2 = getMinElement(first_number, second_number);

    if(result2 == first_number)
            cout<<"Among the number, First Number is greater:   "<<first_number<<endl;
    else
            cout<<"Among the number, Second Number is greater   "<<second_number<<endl;

    return 0;
}