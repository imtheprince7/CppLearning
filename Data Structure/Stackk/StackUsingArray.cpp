#include<iostream>
using namespace std;

#define MAX 6
class Stack{
        int top;
    public: 
        int arr[MAX];
        Stack(){ top = -1;}
    
    // Stack Operation:
        void pushElement(int);
        void printElement(void);
        void popElemet();
        int peekElement();
        bool isEmpty();
        bool isFull();
};

void Stack :: pushElement(int element){
        if(top > (MAX -1))
            cout<<"Stack size is already Full"<<endl;
        else    
            arr[++top] = element;
            cout<<"Element  "<<element <<" inserted.."<<endl;
    }

 void Stack :: printElement(void){
    cout<<"\nInserted Elements are"<<endl;
    for(int i=0; i<MAX; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }   

 void Stack :: popElemet(void){
     if(top < 0)
            cout<<"Stack is empty can't perform pop operation"<<endl;
        else  
            cout<<"Popped element is:"<< arr[top--] <<endl;
 }

 int Stack :: peekElement(void){
    if(top < 0)
        cout<<"Stack is empty can't find peek element"<<endl;
    else 
       cout<<"Peek element is:"<< arr[top] <<endl;
 }

 bool Stack :: isEmpty(void){
        return top <0 ? true : false;
 }

 bool Stack :: isFull(void){
        return top == MAX-1 ? true : false;
 }
int main(){
    Stack stack;
    // Perform Push Elememt
    stack.pushElement(1);
    stack.pushElement(3);
    stack.pushElement(5);
    stack.pushElement(7);
    stack.pushElement(9);
    stack.pushElement(11);

    // print the Stack Element
    stack.printElement();
    
    // Perform Pop Elememt
    stack.popElemet();
    stack.popElemet();

    // Perform Peek Elememt
    stack.peekElement();

    // Check  isEmpty Stack
     stack.isEmpty();


    // Check  isFull Stack
     stack.isFull();

 return 0;   
}