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

class TreeTraversal{
private:
    Node * root;
public:
    TreeTraversal(){
        root = NULL;
    }

// Functions to performs tree traversal
    void inOrder(Node*); 
    void inOrderIterativeTraversal(Node*);

    void preOrder(Node*); 
    void preOrderIterativeTraversal(Node*);

    void postOrder(Node*); 
    void postOrderIterativeTraversal(Node*);
};


void TreeTraversal :: preOrder(Node *root){
    if(root == NULL)
        return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void TreeTraversal :: preOrderIterativeTraversal(Node *root){
       vector<int> answer;
    if(root == NULL)
        return;
    stack<Node*> st;
    st.push(root);

    while(!st.empty()){
        Node *node = st.top();
        st.pop();
        answer.push_back(node->data);
    
    if(node->right !=NULL){ st.push(node->right);}
    if(node->left !=NULL){ st.push(node->left);}
    }

    cout<<"printing Node value using Iterative-Traversal_Approach PreOder"<<endl;
    for(auto const element : answer){
        cout<<element<<" ";
    }
}



void TreeTraversal :: inOrder(Node *root){
    if(root == NULL)
        return;
    preOrder(root->left);
    cout<<root->data<<" ";
    preOrder(root->right);   
}

void TreeTraversal :: inOrderIterativeTraversal(Node *root){
    vector<int> answer;
    if(root == NULL)
        return;
    stack<Node*> st;
    st.push(root);

    while(!st.empty()){
        if(root->left !=NULL){ st.push(root->left); }
        Node *node = st.top();
        st.pop();
        answer.push_back(node->data);
        if(root->right !=NULL){ st.push(root->right); }        
    }

    cout<<"printing Node value using Iterative-Traversal_Approach of InOrder"<<endl;
    for(auto const &element : answer){
        cout<<element<<" ";
    }
}

/*
void TreeTraversal :: postOrder(Node *root){
    if(root == NULL)
        return;
    preOrder(root->left);
    preOrder(root->right);
    cout<<root->data<<" ";
}

void TreeTraversal :: postOrderIterativeTraversal(Node *root){
     if(root == NULL)
        return;
    inOrderTraversal(root->left);
    inOrderTraversal(root->right); 
    cout<<root->data <<" ";
}
*/


int main(){
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

    treeTraversal.preOrder(root);
    cout<<endl;
    treeTraversal.preOrderIterativeTraversal(root);
    cout<<endl;


    treeTraversal.inOrder(root);
    cout<<endl;
    treeTraversal.inOrderIterativeTraversal(root);
    cout<<endl;

    // treeTraversal.postOrder(root);
    // cout<<endl;
    // treeTraversal.postOrderIterativeTraversal(root);
    // cout<<endl;

    

    return 0;
}