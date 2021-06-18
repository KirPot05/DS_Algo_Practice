#include "Binary_Tree.hpp"
#include <algorithm>

int MaxPath(Node *root, int &ans){

    if(root == nullptr){
        return 0;
    }

    int left = MaxPath(root -> left, ans);
    int right = MaxPath(root -> right, ans);

    int nodesum = max(max(root -> data, root -> data + left + right), max(root -> data + left, root -> data + right));

    ans = max(ans, nodesum);

    int singlepathsum = max(root -> data, max(root -> data + left, root -> data + right));
    return singlepathsum;
}


int MaxPathSum(Node *root){

    int ans = INT_MIN;

    MaxPath(root, ans);

    return ans;
}



int main(int argc, char const *argv[])
{   

    Node *root = new Node(1);

    root -> left = new Node(2);
    root -> right = new Node(3);

    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);


    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);


    cout << MaxPathSum(root);

    // 18
    // Path = 5, 2, 1, 7, 3 = 18

/*
          1
        /   \
       2     3
      / \   / \
     4   5 6   7

*/

    return 0;
}
