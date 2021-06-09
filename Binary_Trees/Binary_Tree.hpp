#include <iostream>
using namespace std;


struct Node{

    int data;
    struct Node *left;
    struct Node *right;

        Node(int val){
            data = val;
            left = nullptr;
            right = nullptr;
        }

};


void Inorder(Node *root){   

    if(root == nullptr){
        return;
    }

    Inorder(root -> left);
    
    cout << root -> data << " ";

    Inorder(root -> right);

}


void Postorder(Node *root){

    if(root == nullptr){
        return;
    }

    Postorder(root -> left);
    Postorder(root -> right);

    cout << root -> data << " ";

}


void Preorder(Node *root){

    if(root == nullptr){
        return;
    }

    cout << root -> data << " ";

    Preorder(root -> left);
    Preorder(root -> right);

}

