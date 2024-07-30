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

class Tree{
private:
    Node * root;
public:
    Tree(){
        root = NULL;
    }
// Functions of Tree
    int findHeightUsingLevelOrderTraversal(Node*);
    
};

/* We can use two Approach to find the height of the Binary Tree:
    1. RECURSIVE APPROACH: ( Genrally use this one):
         Using recursive approach we don't use space but use auxiliary space [ height of the BT]
    
    2. LEVEL_ORDER TRAVERSAL:
        We use Queue so Space is O(N).
*/



int Tree :: findHeightUsingLevelOrderTraversal(Node *root){
    int lh, rh ;

// Base case
    if(root == NULL) 
        return 0;
    lh = findHeightUsingLevelOrderTraversal(root->left);
    cout<<"Height of LEFT Tree is"<<" "<<lh<<" "<<"NODE VALUE-> "<<root->data<<endl;

    
    rh = findHeightUsingLevelOrderTraversal(root->right);
    cout<<"Height of RIGHT Tree is"<<" "<<rh<<" "<<"NODE VALUE-> "<<root->data<<endl;

    // int heightOfTree = (1+max(lh,rh));
    // cout<<"Height of the Tree is"<<" "<<heightOfTree<<endl;
     return (1+max(lh,rh));
  }

int main(){
 Tree tree;
    Node *root = new Node(11);
    root->left = new Node(7);
    root->right = new Node(17);
    
    root->left->left = new Node(5);
    root->left->right = new Node(8);
  
    root->left->left->left = new Node(4);
    root->left->left->right = new Node(6);
    root->left->right->left = new Node(9);
    root->left->right->left->right = new Node(10);

    
    root->right->left = new Node(13);
    root->right->right = new Node(18);

    int height = tree.findHeightUsingLevelOrderTraversal(root);
    cout<<height;

}