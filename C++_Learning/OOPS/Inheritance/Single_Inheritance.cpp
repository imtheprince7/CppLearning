#include<iostream>
using namespace std;

class class_A{
public:
    class_A(){
        cout<<"class_A constructor"<<endl;
    }
    void show(){
         cout<<"Show1 message"<<endl;
    }
    ~class_A(){
        cout<<"class_A distructor"<<endl;
    }
};

class class_B: protected class_A{
    public:
    class_B(){
         cout<<"class_B constructor"<<endl;
    }
    void show1(){
        show();
         cout<<"show2 message"<<endl;
    }
    ~class_B(){
        cout<<"class_B distructor"<<endl;
    }
};

int main(){
    class_B b_obj;
    b_obj.show1(); 

 return 0;   
}