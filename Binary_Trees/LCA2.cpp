#include "Binary_Tree.hpp"


Node *LCA2(Node *root, int n1, int n2){

    if(root == nullptr){
        return nullptr;
    }

    if(root -> data == n1 || root -> data == n2){
        return root;
    }

    Node *left = LCA2(root -> left, n1, n2);
    Node *right = LCA2(root -> right, n1, n2);
    
    if(left && right){
        return root;
    }

    if(left != nullptr){
        return left;
    }

    return right;

}


int main()
{

    Node *root = new Node(1);

    root -> left = new Node(2);
    root -> right = new Node(3);

    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);


    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);
    
    Node *lca = LCA2(root, 6, 7);

    if(lca){ 
        cout << "LCA : " << lca -> data;
    }else{ 
        cout << "LCA not found!";
    }

    return 0;
}