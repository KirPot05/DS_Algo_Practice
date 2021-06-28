#include "BST.hpp"


Node* constructBST(int preorder[], int *index, int key, int min, int max, int n){

    if(*index >= n){
        return NULL;
    }

    Node *root = nullptr;

    if(key > min && key < max){
       root = new Node(key);
        (*index)++;

        if(*index < n){
            root -> left = constructBST(preorder, index, preorder[*index], min, key, n);
        }

        if(*index < n){
            root -> right = constructBST(preorder, index, preorder[*index], key, max, n);
        }
    }


    return root;
}


int main(int argc, char const *argv[])
{

    int preorder[] = {10, 2, 1, 13, 11};
    int index = 0, n = 5; 
    
    Node *root = constructBST(preorder, &index, preorder[0], INT_MIN, INT_MAX, n);
    
    Preorder(root);
    
    
    return 0;
}
