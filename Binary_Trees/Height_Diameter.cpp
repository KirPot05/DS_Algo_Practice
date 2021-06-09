#include "Binary_Tree.hpp"

int calcHeight(Node *root){

    // Time Complexity = O(N)

    if(root == nullptr){
        return 0;
    }

    int left = calcHeight(root -> left);
    int right = calcHeight(root -> right);


    return max(left, right) + 1;
}



// O(N ^ 2) Time Complexity
int CalcDiameter(Node *root){

    if(root == nullptr){
        return 0;
    }

    int lh = calcHeight(root -> left);
    int rh = calcHeight(root -> left);

    int curDiameter = lh + rh + 1;

    return max(curDiameter, max(CalcDiameter(root -> left), CalcDiameter(root -> right)));

}



int Calc_Diameter(Node* root, int *height){
    // O(N) Time Complexity

    if(root == nullptr){
        *height = 0;
        return 0;
    }

    int lh = 0, rh = 0;

    int lDiameter = Calc_Diameter(root -> left, &lh); 
    int rDiameter = Calc_Diameter(root -> right, &rh); 

    int curD = lh + rh + 1;

    *height = max(lh, rh) + 1;

    return max(curD, max(lDiameter, rDiameter));

}


int main(){

    Node *root = new Node(1);

    root -> left = new Node(2);
    root -> right = new Node(3);

    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);


    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);
    


    // Height of the Binary Tree
    cout << calcHeight(root) << endl;

    // Diameter Of the Binary Tree
    cout << CalcDiameter(root) << endl;


    // Diameter of the Binary Tree - Optimized
    int h = 0;
    cout << Calc_Diameter(root, &h) << endl;

    return 0;
}