#include <iostream>
using namespace std;


struct node{

    int data;
    struct node *left;
    struct node *right;

        node(int val){
            data = val;
            left = nullptr;
            right = nullptr;
        }

};


void inorder(node *root){   

    if(root == nullptr){
        return;
    }

    inorder(root -> left);
    
    cout << root -> data << " ";

    inorder(root -> right);

}


void postorder(node *root){

    if(root == nullptr){
        return;
    }

    postorder(root -> left);
    postorder(root -> right);

    cout << root -> data << " ";

}


void preorder(node *root){

    if(root == nullptr){
        return;
    }

    cout << root -> data << " ";

    preorder(root -> left);
    preorder(root -> right);

}



int main()
{

    struct node *root = new node(1);
    root -> left = new node(2);
    root -> right = new node(3);
    
/*
         1
       /   \
      2     3

*/

    root -> left -> left = new node(4);
    root -> left -> right = new node(5);


    
/*
         1
       /   \
      2     3
    /   \   
   4     5 

*/

    //preorder(root);

    //inorder(root);

    postorder(root);
    cout << endl;


    return 0;
}