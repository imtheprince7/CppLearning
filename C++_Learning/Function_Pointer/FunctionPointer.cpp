#include<iostream>
using namespace std;

void fun1(){
    cout<<"Function without any parameter and return type:"<<endl;
}

void fun2(int valueA){
    cout<<"Function with parameter and no return type:"<<endl;
    cout<<"Value inside Fun2()"<<" "<<valueA<<endl;
}

int fun3(int valueB){
    cout<<"Function with parameter and int return type:"<<endl;
    cout<<"Value inside Fun3()*3"<<" "<<valueB*3<<endl;
}
int main(){
    // creating function_pointer for fun1()
    void (*fun1_ptr)() = fun1;
    fun1_ptr;
    
    // creating function_pointer for fun2()
    void (*fun2_ptr)(int) = fun2;
    fun2_ptr(400);

    
    // creating function_pointer for fun3()
    void (*fun3_ptr)(int) = fun2;
    fun3_ptr(200);

    return 0;

}