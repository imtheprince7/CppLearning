#include<iostream>
// #include<memory>

using namespace std;

// class Base{
// public:
//     virtual void display(){
//         cout<<"virtual method inside the base class "<<endl;
//     }
// };

// class Derived1 : public Base{
//  public:
//      void display(){
//         cout<<"virtual method inside the Derived1 class "<<endl;
//     }
// };

// class Derived2 : public Base{
//  public:
//      void display(){
//         cout<<"virtual method inside the Derived2 class "<<endl;
//     }
// };


void func(int *ptr){
    cout<<"Value is:"<<(*ptr)<<endl;

    delete ptr;
}

int main(){
    // //Dynamic cast
    // Derived1 d1;
    // Base *base = dynamic_cast<Base*>(&d1);
    // Derived1 *d2 = dynamic_cast<Derived1*>(base);

    // if(d2 == nullptr){
    //     cout<<"Dynamic cast is not successfull"<<endl;
    // }else{
    //     cout<<"Dynamic cast is  successfull"<<endl;
    // }


    int a = 100;
    int &b = a;
    cout<<b<<endl;
    int *p = nullptr;
    
    int v = 120;

    // &b = v;
    cout<<&b<<endl;
    cout<<&p<<endl;
    cout<<&b<<endl;



    cout<<&p<<endl;
    cout<<&b<<endl;



    // int *ptr1 = new int(10);
    //  cout<<"1.Value of ptr1 is:"<<" "<<(*ptr1)<<endl;

    // int *ptr2 = ptr1;
    //  cout<<"1.Value of ptr2 is:"<<" "<<(*ptr2)<<endl;
    
    // func(ptr2);
    // cout<<"2. Value of ptr2 is:"<<" "<<(&ptr2)<<endl;

    // if(ptr1 == nullptr){
    //     cout<<"ptr1 is deleted"<<endl;
    // }else{
    //     cout<<"2. Value of ptr1 is:"<<" "<<(&ptr1)<<endl;
    // }
    return 0;
}