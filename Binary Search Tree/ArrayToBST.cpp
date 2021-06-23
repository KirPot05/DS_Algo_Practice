#include "BST.hpp"

Node* sortedArrayToBST(int arr[], int start, int end){

    if(start > end){
        return nullptr;
    }

    int mid = (start + end) / 2;
    Node *root = new Node(arr[mid]);

    root -> left = sortedArrayToBST(arr, start, mid - 1);
    root -> right = sortedArrayToBST(arr, mid + 1, end);

    return root;

}


int main(int argc, char const *argv[]){

    int arr[] = {10, 20, 30, 40, 50};

    Node* root = sortedArrayToBST(arr, 0, 4);

    Preorder(root);
    cout << endl;

    return 0;
}

