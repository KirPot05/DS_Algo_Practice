#include "Binary_Tree.hpp"



void SumReplace(Node *root){

    if(root == nullptr){
        return;
    }

    SumReplace(root -> left);
    SumReplace(root -> right);

    if(root -> left != nullptr){
        root -> data += root -> left -> data;
    }

    if(root -> right != nullptr){
        root -> data += root -> right -> data;
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
    

    Preorder(root);
    cout << endl;

    

    SumReplace(root);
    Preorder(root);
    cout << endl;

    return 0;
}