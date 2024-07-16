#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

vector<Node*> nodeVal;
class TreeTraversal{
    Node * root;
public:
    TreeTraversal(){
        root = NULL;
    }
// Functions to performs tree traversal using DFS Technique
    void inOrderTraversal(Node*);
    void preOrderTraversal(Node*);
    void postOrderTraversal(Node*);
};

void TreeTraversal :: preOrderTraversal(Node *root){

    stack<Node*> st;
    st.push(root);
    if(root == NULL)
        return;
    while(!st.empty()){
        root = st.top();
        st.pop();
        nodeVal.push_back(root);
        if(root->right == NULL){
            st.push(root->right);
        }
        if(root->left == NULL){
            st.push(root->left);
        }
    }
    cout<<"Printing value"<<endl;
    for(auto ele : nodeVal){
        cout<<ele<<" ";
    }
 
}

int main(){
    vector<Node*> answer;
    TreeTraversal treeTraversal;
    Node *root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(17);
    
    root->left->left = new Node(5);
    root->left->right = new Node(8);

    root->left->left->left = new Node(4);
    root->left->left->right = new Node(6);

    root->left->right = new Node(8);
    root->left->right->left = new Node(9);

    
    root->right->left = new Node(11);
    root->right->right = new Node(18);

    treeTraversal.inOrderTraversal(root);
    cout<<endl;
    treeTraversal.preOrderTraversal(root);
    cout<<endl;
    treeTraversal.postOrderTraversal(root);
    return 0;
}