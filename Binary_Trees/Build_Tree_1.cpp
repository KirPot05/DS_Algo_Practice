/*

    Build tree from Preorder and Inorder

*/

#include <iostream>
#include "Binary_Tree.hpp"
using namespace std;



int search(int arr[], int st, int end, int element){

    for(int i=st; i<=end; i++){
        if(arr[i] == element){
            return i;
        }
    }

    return -1;
}

void print(int arr[], int n){

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

}

Node* buildtree(int preorder[], int inorder[], int start, int end){

    static int idx = 0;

    if(start > end){
        return nullptr;
    }

    int curr = preorder[idx++];
    Node* root  = new Node(curr);

    if(start == end){
        return root;
    }

    int pos = search(inorder, start, end, curr);

    root -> left = buildtree(preorder, inorder, start, pos-1);
    root -> right = buildtree(preorder, inorder, pos+1, end);

    return root;
}   




int main()
{   
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    Node* root = buildtree(preorder, inorder, 0, 4);

    print(preorder, 5);
    cout << "Tree Preorder Traversal" << endl;
    Preorder(root);
    cout << endl << endl << endl;
    
    print(inorder, 5);
    cout << "Tree Inorder Traversal" << endl;
    Inorder(root);

    return 0;
}