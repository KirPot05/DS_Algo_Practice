#include "Binary_Tree.hpp"


int height(Node *root){

    if(root == nullptr){
        return 0;
    }

    return max(height(root -> left), height(root -> right)) + 1;
}

bool isBalanced(Node *root){

    if(root == nullptr){
        return true;
    }

    if(!isBalanced(root -> left)){
        return false;
    }

    if(!isBalanced(root -> right)){
        return false;
    }
    
    int lh = height(root -> left);
    int rh = height(root -> right);

    if(abs(lh - rh) <= 1){
        return true;
    }else{
        return false;
    }

}




// Optimized Solution

bool isBalanced(Node *root, int *height){

    if(root == nullptr){
        return true;
    }
    int lh = 0, rh = 0;

    if(!isBalanced(root-> left, &lh)){
        return false;
    }

    if(!isBalanced(root -> right, &rh)){
        return false;
    }

    *height = max(lh, rh) + 1;

    if(abs(lh - rh) <= 1){
        return true;
    }else{
        return false;
    }
}







int main(){

    Node *root = new Node(1);

    root -> left = new Node(2);
    root -> right = new Node(3);

    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);


    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);


    Node *root1 = new Node(1);
    root1 -> left = new Node(2);
    root1 -> left ->left = new Node(3);


    int height = 0;
    isBalanced(root, &height) ? cout << "Balanced Tree" : cout << "Unbalanced Tree";

    return 0;
}