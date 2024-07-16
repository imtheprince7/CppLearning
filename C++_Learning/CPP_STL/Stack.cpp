#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    stack<int> q;
    q.push(2);
    q.push(4);
    q.push(5);
    q.push(7);
    q.push(9);
    q.push(11);

    print(q);
    q.pop();
    cout<<endl;
    print(q);

    cout<<"\nSize of Stack is"<<" "<<q.size()<<endl;
    return 0;
}