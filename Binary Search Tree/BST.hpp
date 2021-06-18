#include <iostream>
using namespace std;

struct Node{

    int data;
    Node *left, *right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }

};

Node* insert(Node *root, int val){

    if(root == nullptr){
        return new Node(val);
    }

    if(val < root -> data){
        root -> left = insert(root -> left, val);
    } else{
        root -> right = insert(root -> right, val);
    }

    return root;
}


void Inorder(Node* root){

    if(root == nullptr){
        return;
    }

    Inorder(root -> left);
    cout << root -> data << " ";
    Inorder(root -> right);

}

