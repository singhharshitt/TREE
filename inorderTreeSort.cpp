#include <iostream>
using namespace std;

struct node{
    node* left;
    node* right;
    int data;
    node(int value){
        data = value;
        left = right = nullptr;
    }
};

void insertion(node*& root, int value){
    node* newNode = new node(value);
    if(root == nullptr){
        root = newNode;
        return;
    }
    node* temp = root;
    while(temp != nullptr){
        if(value < temp->data){
            if(temp->left == nullptr){
                temp->left = newNode;
                return;
            }
            temp = temp->left;
        } else {
            if(temp->right == nullptr){
                temp->right = newNode;
                return;
            }
            temp = temp->right;
        }
    }
}

void inorder(node* root){
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    node* root = nullptr;
    int n;
    cout << "Enter number of elements to insert: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int element;
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        insertion(root, element);
    }
    cout << "Inorder: ";
    inorder(root);
    cout << endl;
    return 0;
}
