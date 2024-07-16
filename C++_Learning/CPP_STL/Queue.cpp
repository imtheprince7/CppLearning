#include<iostream>
#include<queue>
using namespace std;
void print(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main(){
    queue<int> q;
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
    return 0;
}