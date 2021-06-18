#include "Binary_Tree.hpp"


void printSubtreeNodes(Node *root, int k){

    if(root == nullptr || k < 0){
        return;
    }

    if(k == 0){
        cout << root -> data << " ";
        return;
    }

    printSubtreeNodes(root -> left, k-1);
    printSubtreeNodes(root -> right, k-1);

}


int printNodesAtK(Node *root, Node *target, int k){

    if(root == nullptr){
        return -1;
    }

    if(root == target){
        printSubtreeNodes(root, k);
        return 0;
    }

    // Checking for Left Subtree
    int dl = printNodesAtK(root -> left, target, k);
    
    if(dl != -1){

        if(dl + 1 == k){
            cout << root -> data << " ";
        } else {
            printSubtreeNodes(root -> right, k - dl - 2);
        }

        return 1 + dl;
    }
    

    // Checking for Right Subtree
    int dr = printNodesAtK(root -> right, target, k);
    if(dr != -1){

        if(dr + 1 == k){
            cout << root -> data << " ";
        } else {
            printSubtreeNodes(root -> left, k - dl - 2);
        }

        return 1 + dr;
    }


    return -1;
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


    cout << printNodesAtK(root, root, 2);



    return 0;
}
