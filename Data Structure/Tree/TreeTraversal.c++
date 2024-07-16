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
    Node * root;
public:
    TreeTraversal(){
        root = NULL;
    }

// Functions to performs tree traversal
    void inOrderTraversal(Node*);
    void preOrderTraversal(Node*);
    void postOrderTraversal(Node*);

    vector<vector<int>> levelOrderTraversal(Node *);
};

void TreeTraversal :: inOrderTraversal(Node *root){
    if(root == NULL)
        return;
    inOrderTraversal(root->left);
    cout<<root->data <<" ";
    inOrderTraversal(root->right);
}

void TreeTraversal :: preOrderTraversal(Node *root){
      if(root == NULL)
        return;
    cout<<root->data <<" ";
    inOrderTraversal(root->left);
    inOrderTraversal(root->right);
}


void TreeTraversal :: postOrderTraversal(Node *root){
     if(root == NULL)
        return;
    inOrderTraversal(root->left);
    inOrderTraversal(root->right); 
    cout<<root->data <<" ";
}


vector<vector<int>> TreeTraversal ::levelOrderTraversal(Node *root){
    vector<vector<int>> v;
    if( root = NULL){
        return v;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        cout<<"Queue Size"<<" "<<size<<endl;
        vector<int> level;

        for(int i=0; i<size; i++){
            Node *node = q.front();
            q.pop();
            cout<<"Inside Node->left"<<endl;

            if(node->left != NULL){
                cout<<"Inside Node->left"<<endl;
                cout<<"Node value"<<" "<<node->data<<endl;
                 q.push(node->left);
            }
            cout<<"Inside Node->right"<<endl;
            if(node->right != NULL){
                 q.push(node->right); 
            }
            cout<<"outside Node->right"<<endl;
            
            cout<<node->data <<" ";
            level.push_back(node->data);
        }
        v.push_back(level);
    }
    return v;
    }

int main(){
    TreeTraversal treeTraversal;
    Node * root = new Node(10);
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
    
    cout<<endl;
    treeTraversal.levelOrderTraversal(root);
    

    return 0;
}