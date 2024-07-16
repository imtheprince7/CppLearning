#include<bits/stdc++.h>
using namespace std;

class Abc{
    public:
    virtual void displatMessage(){
        cout<<"I am from class-Abc"<<endl;
    }
    ~Abc(){
        cout<<" I am from Abc-class-Destructor"<<endl;
    }

};

class Bcd : public Abc {
    public:
    virtual void displatMessage(){
        cout<<"I am from class-Bcd"<<endl;
    }
    ~Bcd(){
        cout<<" I am from Bcd-class-Destructor"<<endl;
    }

};

class Cde : public Bcd{
    public:
    virtual void displayMessage(){
        cout<<"I am from class-Cde"<<endl;
    } 
    ~Cde(){
        cout<<" I am from Cde-class-Destructor"<<endl;
    }

};

class Def{
    public:
    virtual void displayMessage(){
        cout<<"I am from class-Def"<<endl;
    }
     ~Def(){
        cout<<" I am from Def-class-Destructor"<<endl;
    }

};

int main(){

    // Bcd bcd;
    // Abc *abc;
    // abc = &bcd;

    Bcd *bcd = new Bcd();
    Abc *abc = bcd;


    abc->displatMessage();

    return 0;
}