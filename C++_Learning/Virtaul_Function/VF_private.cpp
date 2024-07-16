#include<bits/stdc++.h>
using namespace std;

/*
    Virtual Function can declare as private only in derived-class but not in Base class.
*/

class Base{
    public:
    Base(){ cout<<"Base class constructor"<<endl;}
    
    virtual ~ Base(){ cout<<"Base class destructor"<<endl; }

    void show(){  cout<< "MessagefFrom base class-SHOW()"<<endl; }

    virtual void showMessage(){ cout<< "Message from base class--showMessage() "<<endl; }
};


class Derived : public Base{
    public:
    Derived(){ cout<<"Derived class constructor"<<endl;}  
    virtual ~ Derived(){ cout<<"Derived class destructor"<<endl; }

    void show(){  cout<< "MessagefFrom Derived class-SHOW()"<<endl; }

    private:
         void showMessage() override
         { cout<< "Message drom Derived class--showMessage() "<<endl; }
};

int main(){
    Derived derived;
    Base* base = &derived;

    // base->show();
    base->showMessage();

    delete base;
    
    return 0;
}