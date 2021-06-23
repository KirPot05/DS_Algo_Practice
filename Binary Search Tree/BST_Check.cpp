#include "BST.hpp"


bool isBST(Node *root, Node *min, Node *max){

    if(root == NULL){
        return true;
    }


    if(min != nullptr && root -> data <= min->data){
        return false;
    }

    if(max != nullptr && root -> data >= max->data){
        return false;
    }

    bool leftValid = isBST(root -> left, min, root);
    bool rightValid = isBST(root -> right, root, max);

    return leftValid && rightValid;
}



int main(int argc, char const *argv[])
{

    Node *root = new Node(1);

    for(int i=2; i<10; i++){
        insert(root, i);
    }
    
    

    if(isBST(root, NULL, NULL)){
        cout << "Valid BST";
    } else{
        cout << "Not a BST";
    }



    


    return 0;
}
