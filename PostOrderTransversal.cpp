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

void postorder(node* root){
    if(root==nullptr){
        return;
    }
    
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main() {
    node* root = create_tree();
    cout<<"Postorder traversal: "<<endl;
    postorder(root);
    
    return 0;
}
