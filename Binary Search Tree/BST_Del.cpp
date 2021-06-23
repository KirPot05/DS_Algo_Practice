#include "BST.hpp"



Node* inorderSucc(Node *root){

    Node *curr = root;

    while(curr && curr -> left != nullptr){
        curr = curr -> left;
    }
    return curr;
}

Node* deleteBST(Node* root, int val){

    if(val < root -> data){
        root -> left = deleteBST(root -> left, val);
    }

    else if(val > root -> data){
        root -> right = deleteBST(root -> right, val);
    }

    else{

        if(root -> left == nullptr){
            Node* temp = root -> right;
            delete root; 
            return temp;
        }

        else if(root -> right == nullptr){
            Node *temp = root -> left;
            delete root;
            return temp;
        }

        Node *temp = inorderSucc(root -> right);
        root -> data = temp -> data;
        root -> right = deleteBST(root -> right, temp -> data);

    }

    return root;
}

