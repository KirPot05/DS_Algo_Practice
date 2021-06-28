#include "BST.hpp"

using namespace std;


bool isIdentical(Node* root1, Node *root2){

    if(root1 == nullptr && root2 == nullptr){
        return true;
    }

    else if(root1 == nullptr || root2 == nullptr){
        return false;
    }

    else{

        bool cond1 = root1 -> data == root2 -> data;
        bool cond2 = isIdentical(root1 -> left, root2 -> left);
        bool cond3 = isIdentical(root1 -> right, root2 -> right);


        if(cond1 && cond2 && cond3){
            return true;
        }

        return false;

    }

}

int main(int argc, char const *argv[])
{
    
    Node *root = new Node(4);

    for(int i=1; i<10; i++){
        insert(root, i);
    }


    if(isIdentical(root, root)){
        cout << "BSTs are identical";
    } else{
        cout << "BSTs are not identical";
    }


    return 0;
}
