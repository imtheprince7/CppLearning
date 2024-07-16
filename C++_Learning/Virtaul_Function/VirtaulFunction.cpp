#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        virtual void display(){
            cout<<"From class-A"<<endl;
        }
         ~ A(){
            cout<<"Virtaual destructor"<<endl;
         }
};

class B: public A{
    public:
        virtual void display(){
            cout<<"From class-B"<<endl;
        }
       

};

class C : public B{
    public:
        virtual void display(){
            cout<<"From class-C"<<endl;
        }

};

int main(){
    A *a_base;
    C c_base;
   
    a_base = &c_base;
    a_base->display();

     // B b_base;
    // a_base = & b_base;
    // a_base->display();


    return 0;
}