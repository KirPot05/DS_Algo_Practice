#include "BST.hpp"

bool search(Node *root, int val){


    if(root -> data == val){
        return true;
    }

    if(root -> data > val){
        return search(root -> left, val);
    } else {
        return search(root -> right, val);
    }

    return false;

}


Node* inorderSucc(Node *root){

    Node *curr = root;

    while(curr && curr -> left != nullptr){
        curr = curr -> left;
    }
    return curr;
}

Node* deleteBST(Node* root, int val){

    if(val < root -> data){
        root -> left = deleteBST(root -> left, val);
    }

    else if(val > root -> data){
        root -> right = deleteBST(root -> right, val);
    }

    else{

        if(root -> left == nullptr){
            Node* temp = root -> right;
            delete root; 
            return temp;
        }

        else if(root -> right == nullptr){
            Node *temp = root -> left;
            delete root;
            return temp;
        }

        Node *temp = inorderSucc(root -> right);
        root -> data = temp -> data;
        root -> right = deleteBST(root -> right, temp -> data);

    }

    return root;
}




int main(int argc, char const *argv[])
{
    Node *root = nullptr;

    int arr[] = {4, 2, 5, 1, 3, 6};


    
    root = insert(root, arr[0]);

    for (int i = 1; i < 6; i++)
    {   
        insert(root, arr[i]);
    }
    
    Inorder(root);
    cout << endl;

    // Before Deletion
    
    /*
            4
          /   \
         2     5
        /     / \
       1     3   6

    */

    //search(root, 5) ? cout << "Key exists" << endl : cout << "Key doesnt exist" << endl;
    
    root = deleteBST(root, 4);
    Inorder(root);


    // After Deletion

   /*
            3
          /   \
         2     5
        /       \
       1         6
   
   */



    return 0;
}
