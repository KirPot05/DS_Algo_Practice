#include "Binary_Tree.hpp"


int main(){

    Node *root = new Node(1);

    root -> left = new Node(2);
    root -> right = new Node(3);

    root -> left -> left = new Node(4);
    root -> right -> left = new Node(5);


    Inorder(root);
    cout << endl;

    Postorder(root);
    cout << endl;

    return 0;
}