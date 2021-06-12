#include "Binary_Tree.hpp"
#include <queue>




void right_View(Node* root){

    if(root == nullptr){
        return;
    }

   
    queue <Node*> q;
    q.push(root);

    while(!q.empty()){

        int n = q.size();
        for(int i=0; i<n; i++){

            Node *ptr = q.front();
            q.pop();

            if(i == n-1){
                cout << ptr -> data << " ";
            }

            if(ptr -> left)
                q.push(ptr -> left);

            if(ptr -> right)
                q.push(ptr -> right);

          

        }

    }


}



int main(){

    Node *root = new Node(1);

    root -> left = new Node(2);
    root -> right = new Node(3);

    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);


    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);


    right_View(root);
    
    
    return 0;
}