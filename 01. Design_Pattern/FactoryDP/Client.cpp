#ifdef __io__
#define __io__
#include<iostream>
using namespace std;
#endif

#include "ToyFactory.cpp"

int main(){
    //client code Starts
    int type;
    while (1) {
        cout<<endl<<"Enter(1-3) or Zero for exit:"<<endl;
        cin>>type;
        if(!type)
            break;
        Toy *t = Toyfactory::createToy(type);
        if(t){
            t->showProduct();
            delete t;
        }
    }
    cout<<"Exiting ...."<<endl;
    //client code end here
    return 0;
    
}
