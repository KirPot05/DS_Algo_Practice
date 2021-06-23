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


void Preorder(Node *root){

    if(root == nullptr){
        return;
    }

    cout << root -> data << " ";
    Preorder(root -> left);
    Preorder(root -> right);

}


void Postorder(Node *root){

    if(root == nullptr){
        return;
    }
    
    Postorder(root -> left);
    Postorder(root -> right);
    cout << root -> data << " ";
}





bool search(Node *root, int val){


    if(root -> data == val){
        return true;
    }

    if(root -> data > val){
        return search(root -> left, val);
    } else {
        return search(root -> right, val);
    }

    return false;

}