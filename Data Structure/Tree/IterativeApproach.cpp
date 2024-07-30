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
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);   
}

void TreeTraversal :: inOrderIterativeTraversal(Node *root){
    stack<Node*> st;
    Node *node = root; 
    vector<int> answer;

// BAse Case:
    if(root == NULL)  { return;  }

// Main Logic
    while(true){
        if(node != NULL){
            st.push(node);
            node = node->left;
        }
        else{
            if(st.empty() == true) break;
            node = st.top();
            st.pop();
            answer.push_back(node->data);
            node = node->right;
        }

    }
    cout<<"printing Node value using Iterative-Traversal_Approach of InOrder"<<endl;
    for(auto const &element : answer){
        cout<<element<<" ";
    }
}


void TreeTraversal :: postOrder(Node *root){
    if(root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void TreeTraversal :: postOrderIterativeTraversal(Node *root){
    stack<Node*> st;  
    Node * curr = root, *temp = NULL;
    vector<int> answer;
   

// BAse case:
    if(root == NULL) { return; }

// Main Logic:
int i=0;
    while ( curr !=NULL && st.empty()){
        if(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }
        else{
            temp = st.top()->right;
            if(temp == NULL){
                temp = st.top();
                st.pop();
                // cout<<"temp data if->   "<<temp->data<<endl;
                answer.push_back(temp->data);


                while (!st.empty() && temp == st.top()->right){
                    temp = st.top();
                    st.pop();
                // cout<<"temp data while->   "<<temp->data<<endl;

                
                    answer.push_back(temp->data);
                }
            }
            else    
                curr = temp;
        }
    }

    cout<<"printing Node value using Iterative-Traversal_Approach of PostOrder"<<endl;
     for(auto const &element : answer){
        cout<<element<<" ";
    }
}



int main(){
    TreeTraversal treeTraversal;
    Node *root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(17);
    
    root->left->left = new Node(5);
    root->left->right = new Node(8);

    root->left->left->left = new Node(4);
    root->left->left->right = new Node(6);
    root->left->right->left = new Node(9);

    
    root->right->left = new Node(11);
    root->right->right = new Node(18);



    treeTraversal.preOrder(root);
    cout<<endl;
    treeTraversal.preOrderIterativeTraversal(root);
    cout<<endl;

    cout<<endl;
    treeTraversal.inOrder(root);
    cout<<endl;
    treeTraversal.inOrderIterativeTraversal(root);
    cout<<endl;
    cout<<endl;

    treeTraversal.postOrder(root);
    cout<<endl;
    treeTraversal.postOrderIterativeTraversal(root);
    cout<<endl;

    

    return 0;
}