/*

    Build tree from Preorder and Inorder

*/

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

node* buildtree(int preorder[], int inorder[], int start, int end){

    static int idx = 0;

    if(start > end){
        return nullptr;
    }

    int curr = preorder[idx++];
    node* root  = new node(curr);

    if(start == end){
        return root;
    }

    int pos = search(inorder, start, end, curr);

    root -> left = buildtree(preorder, inorder, start, pos-1);
    root -> right = buildtree(preorder, inorder, pos+1, end);

    return root;
}   


void inorder_Print(node* root){

    if(root == nullptr){
        return;
    }

    inorder_Print(root -> left);

    cout << root -> data << " ";

    inorder_Print(root -> right);


}

void preorder_Print(node* root){

    if(root == nullptr){
        return;
    }

    cout << root -> data << " ";

    preorder_Print(root -> left);

    preorder_Print(root -> right);


}


int main()
{   
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    node* root = buildtree(preorder, inorder, 0, 4);

    print(preorder, 5);
    cout << endl << "Tree Preorder Traversal" << endl;
    preorder_Print(root);
    cout << endl << endl;
    
    print(inorder, 5);
    cout << endl << "Tree Inorder Traversal" << endl;
    inorder_Print(root);

    return 0;
}