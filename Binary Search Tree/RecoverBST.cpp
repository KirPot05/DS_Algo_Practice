#include "BST.hpp"
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


void calcPtr(Node *root, Node **first, Node **mid, Node **last, Node **prev){

    if(root == NULL){
        return;
    }  

    calcPtr(root -> left, first, mid, last, prev);

    if(*prev && root -> data < (*prev) -> data){
        if(!*first){
            *first = *prev;
            *mid = root;
        }

        else{
            *last = root;
        }
    }
    

    *prev = root;

    calcPtr(root -> right, first, mid, last, prev);


}


void recoverBST(Node *root){

    Node *first, *last, *mid, *prev;

    first = NULL;
    last = NULL;
    mid = NULL;
    prev = NULL;

    calcPtr(root, &first, &mid, &last, &prev);

    if(first && last){
        swap(&(first -> data), &(last -> data));
    }

    else if(first && mid){
        swap(&(first -> data), &(mid -> data));
    }

}


int main()
{
/*
         6
       /   \ 
      3     9
     / \     \ 
    1   4     13

*/

    Node *root = new Node(6);
    root -> left = new Node(9);
    root -> right = new Node(3);

    root -> left -> left = new Node(1);
    root -> left -> right = new Node(4);

    root -> right -> right = new Node(13);

    Inorder(root);
    cout << endl;
    recoverBST(root);

    Inorder(root);
    return 0;
}