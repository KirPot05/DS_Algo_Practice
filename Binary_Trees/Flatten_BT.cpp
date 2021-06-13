#include "Binary_Tree.hpp"



void flatten(Node *root){

    if(root == nullptr || (root -> left == nullptr && root -> right == nullptr)){
        return;
    }


    if(root -> left != nullptr){

        flatten(root -> left);


        Node *temp = root -> right;
        root -> right = root -> left;
        root -> left = nullptr;

        Node *t = root -> right;
        while(t -> right != nullptr){
            t = t->right;
        }

        t -> right = temp;
    }


    flatten(root -> right);

}




int main(int argc, char const *argv[])
{
    Node *root = new Node(1);

    root -> left = new Node(2);
    root -> right = new Node(3);

    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);


    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);

    Inorder(root);
    cout << endl;

    flatten(root);

    Inorder(root);
    

    return 0;
}
