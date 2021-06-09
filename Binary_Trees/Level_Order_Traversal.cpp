#include "Binary_Tree.hpp"
#include <queue>


void Level_Order_Traversal(Node *root){

    if(root == nullptr){
        return;
    }

    queue <Node*> q;

    q.push(root);
    q.push(nullptr);

    while(!q.empty()){

        Node *node = q.front();
        q.pop();

        if(node != NULL){

            cout << node -> data << " ";

            if(node -> left){
                q.push(node -> left);
            }

            if(node -> right){
                q.push(node -> right);
            }
        }

        else if(!q.empty()){
            q.push(NULL);
        } 

    }

}



int main(int argc, char const *argv[])
{
    
/*
          1
       /     \
      2       3
    /   \    /  \
   4     5  6    7

*/        
    
    Node *root = new Node(1);

    root -> left = new Node(2);
    root -> right = new Node(3);

    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);


    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);
    

    Level_Order_Traversal(root);

    return 0;
}
