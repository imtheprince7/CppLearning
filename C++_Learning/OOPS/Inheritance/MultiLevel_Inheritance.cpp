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


class class_C: public class_B{
    public:
    class_C(){
         cout<<"class_C constructor"<<endl;
    }
    void show2(){
        show1();
         cout<<"show2 message"<<endl;
    }
    ~class_C(){
        cout<<"class_C distructor"<<endl;
    }
};


int main(){
    class_C c_obj;
    c_obj.show2(); 

 return 0;   
}