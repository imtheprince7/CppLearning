#include<iostream>
using namespace std;

class DestructorDemo{
    public:
    // int *x;
    // DestructorDemo(){cout<<"Default Constructor";}
    // DestructorDemo(int *x){cout<<"parameterized Constructor"<<" "<<*x <<endl;}
    
    ~DestructorDemo(){cout<<"Default Distructor"<<endl;
    // delete x;
    }

};

int main(){
    int a =10;
    int *ptr = &a;
    DestructorDemo dd;
    // (new int (10));
    cout<<"\n SizeOf dd"<< sizeof(dd)<<endl;
   std::cout<<&dd<<endl;
    
    cout<<"\n SizeOf ptr"<< sizeof(ptr)<<endl;

    return 0;
}