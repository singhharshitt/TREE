//This program has all transversal i.e inorder, preorder, and post order
//I HAVE 
// INORDER
#include <iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int value){
        data= value;
        left=right= NULL;
    }
};

node* insert(node* root, int value){
    //if my root is empty
    if(root==nullptr){
        return new node(value);
        //we have sucessfully created a new node
    }
    //if my new value is smaller than the root value then we add to the left of the root and if my new value is more then we go for the right side
    if(value< root->data){
        root->left= insert(root->left, value);
    }else{
        root->right= insert(root->right, value);
    }
    return root;
}
//print value in inline order 
void inorder(node* root){
    //in inorder we move like-->
    //left->root->right;
    if(root!=nullptr){
        inorder(root->left);//visit left
        cout<<root->data<<" ";//visit root
        inorder(root->right);//visit right
    }
}

int main() {
    node* root=nullptr;
    int n;
    cout<<"Enter the number of elements in the tree: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        root=insert(root, element);
    }
    cout<<"Printing Inorder: ";
    inorder(root);
    
    return 0;
}
//PREORDER

#include <iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int value){
        data= value;
        left= right= nullptr;
    }
};

node* insert(node* root, int value){
    if(root==nullptr){
        return new node(value);
    }
    
    if(value<root->data){
        root->left= insert(root->left, value);
    }else{
        root->right= insert(root->right, value);
    }
    return root;
}

//preorder==== root->left->right
void preorder(node* root){
    if(root!=nullptr){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
    node* root= nullptr;
    int n;
    cout<<"Enter number of tree contains: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        root= insert(root, element);
    }
    cout<<"Pre Order: ";
    preorder(root);
    return 0;
}


//POSTORDER;






