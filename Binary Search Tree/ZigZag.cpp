#include "BST.hpp"
#include <stack>

void zigzagTraversal(Node* root){

    stack <Node*> curLevel;
    stack <Node*> nxtLevel;
    bool LeftToRight = true;


    curLevel.push(root);

    while(!curLevel.empty()){

        Node *temp = curLevel.top();
        curLevel.pop();

        if(temp){

            cout << temp -> data << " ";

            if(LeftToRight){
                
                if(temp -> left){
                    nxtLevel.push(temp->left);
                }
                if(temp -> right){
                    nxtLevel.push(temp -> right);
                }
            }

            else{

                if(temp -> right){
                    nxtLevel.push(temp->right);
                }
                if(temp -> left){
                    nxtLevel.push(temp -> left);
                }
            }

        }

        if(curLevel.empty()){
            LeftToRight = !LeftToRight;
            swap(curLevel, nxtLevel);        
        }

    }


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
    
    Preorder(root);
    cout << endl;

    zigzagTraversal(root);


    return 0;
}
