#include "Binary_Tree.hpp"

int count_node(Node *root){

    if(root == nullptr){
        return 0;
    }

    return count_node(root -> left) + count_node(root -> right) + 1;

}


int sum_node(Node *root){

    if(root == nullptr){
        return 0;
    }

    return sum_node(root -> left) + sum_node(root -> right) + root -> data;
}



int main(){

    Node *root = new Node(1);

    root -> left = new Node(2);
    root -> right = new Node(3);

    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);


    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);
    


    cout << count_node(root) << endl;
    cout << sum_node(root) << endl;   

    return 0;
}