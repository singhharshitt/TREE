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

void inorder(node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main() {
    node* root = create_tree();
    cout<<"Inorder traversal: "<<endl;
    inorder(root);
    
    return 0;
}
