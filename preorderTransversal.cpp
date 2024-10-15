// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int value){
        data= value;
        left= nullptr;
        right= nullptr;
    }
};

node* create_tree(){
    node*  root= new node(10);
    root->left = new node(20);
    root->right= new node(30);
    root->left->right=new node(50);
    return root;
}

void preorder(node* root){
    if(root==nullptr){
        return;
    }
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main() {
    node* root = create_tree();
    cout<<"Preorder traversal: "<<endl;
    preorder(root);
    
    return 0;
}
