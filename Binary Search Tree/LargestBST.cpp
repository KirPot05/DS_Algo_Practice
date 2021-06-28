#include "BST.hpp"
using namespace std;


struct Info
{
    int size; 
    int max;
    int min;
    int ans;
    bool isBST;
};


Info largestBST(Node *root){

    if(root == nullptr){
        return {0, INT_MIN, INT_MAX, 0, true};
    }

    if(root -> left == nullptr && root -> right == nullptr){
        return {1, root -> data, root -> data, 1, true};
    }

    Info leftInfo = largestBST(root -> left);
    Info rightInfo = largestBST(root -> right);

    Info curr;
    curr.size = (1 + leftInfo.size + rightInfo.size);

    if(leftInfo.isBST && rightInfo.isBST && leftInfo.max < root -> data && rightInfo.min > root -> data){
        
        curr.min = min(leftInfo.min, min(rightInfo.min, root -> data));
        curr.max = max(rightInfo.max, max(leftInfo.max, root -> data));


        curr.ans = curr.size;
        curr.isBST = true;
        return curr;
    }

    curr.ans = max(leftInfo.ans, rightInfo.ans);
    curr.isBST = false;

    return curr;

}



int main()
{

    Node *root = nullptr;

    root = insert(root, 11);
    for(int i=4; i<=10; i++){
        insert(root, i);
    }
    
    cout << count(root) << endl;

    cout << "Largest BST size : " << largestBST(root).ans << endl;


    return 0;
}