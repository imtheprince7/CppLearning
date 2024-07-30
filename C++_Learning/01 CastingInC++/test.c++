#include<iostream>
using namespace std;

class Test{
public:
// int ab;
// long long abb;
static int bc ;
};

 int Test :: bc = 10;

int main(){
    Test test;
    cout<<"Size of class Test:  "<<sizeof(test)<<endl;
    cout<<Test :: bc <<endl;
    
    cout<<test.bc <<endl;
    return 0;
}