#include<iostream>
using namespace std;
class StackNode{
    public:
    int data;
    StackNode *next;

    StackNode(int data){
        this->data = data;
        this->next = NULL;
     }

     void pushElement(int data);
     void popElement(void);
     void peekElement(void);
     


};

int main(){

    return 0;
}