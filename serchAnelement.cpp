#include <iostream>
#include <vector>

using namespace std;
struct node{
    int data;
    node* right;
    node* left;
    node(int value){
        data= value;
        right=left= nullptr;
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

void postorder(node* root){
    if(root!=nullptr){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

//inserting the tree elements of tree in post order

void postorderTraversal(node* root, vector<int>& arr){
    if(root!=nullptr){
        postorderTraversal(root->left, arr);//inserting left
        postorderTraversal(root->right, arr);//inserting right
        arr.push_back(root->data);//inserting the root data
        
    }
}

int main(){
    node* root= nullptr;
    int n;
    cout<<"Enter number n: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    
    vector<int>arr;
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        root=insert(root, element);
    }
    int target;
    cout<<"Enter the element to check: ";
    cin>>target;
    cout<<"Post-order traversal: ";
    postorder(root);
    postorderTraversal(root, arr);
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            cout<<"Target is found at "<<i<<" and the target element is "<<target<<endl;
            break;
        }
    }
    
    
}
