#include "BST.hpp"
#include <vector>

vector <Node*> constructTrees(int start, int end){

    vector <Node*> trees;

    if(start > end){
        trees.push_back(NULL);
    }

    for(int i=start; i<=end; i++){

        vector <Node*> leftSubtrees = constructTrees(start, i-1);
        vector <Node*> rightSubtrees = constructTrees(i + 1, end);

        for(int j=0; j<leftSubtrees.size(); j++){
            Node *left = leftSubtrees[j];
            
            for(int k=0; k<rightSubtrees.size(); k++){
                Node *right = rightSubtrees[k];

                Node *node = new Node(i);
                node -> left = left;
                node -> right = right;

                trees.push_back(node);
            }
        }

        
    }

    return trees;

}

int main(){

    vector <Node*> trees = constructTrees(1, 3);

    for(int i=0; i<trees.size(); i++){

        cout << i+1 << " : ";
        Preorder(trees[i]);
        cout << endl;

    }

    return 0;
}