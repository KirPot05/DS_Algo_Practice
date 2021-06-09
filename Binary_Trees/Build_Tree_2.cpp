/*

    Build tree from Postorder and Inorder

*/



#include "Binary_Tree.hpp"

int search(int arr[], int st, int end, int ele){

    for(int i=st; i<=end; i++){

        if(arr[i] == ele){
            return i;
        }

    }

    return -1;
}


Node* buildTree(int inorder[], int postorder[], int start, int end){

    static int idx = 4;

    if(start > end){
        return nullptr;
    }

    int curr = postorder[idx--];

    Node *node = new Node(curr);

    if(start == end){
        return node;
    }

    int pos = search(inorder, start, end, curr);

    node -> right = buildTree(inorder, postorder, pos + 1, end);
    node -> left = buildTree(inorder, postorder, start, pos - 1);

    return node;

}


int main(){

    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};

    Node *root = buildTree(inorder, postorder, 0, 4);

    Postorder(root);
    cout << endl;
    Inorder(root);

    return 0;
}