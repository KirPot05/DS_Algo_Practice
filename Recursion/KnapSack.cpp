#include <iostream>
using namespace std;
#define endl '\n'



int knapsack(int value[], int wt[], int n, int W){

    
    if(n == 0 || W == 0){
        return 0;
    }

    if(wt[n-1] > W){
        return knapsack(value, wt, n-1, W);
    }


    return max(knapsack(value, wt, n-1, W - wt[n-1]) + value[n-1], knapsack(value, wt, n-1, W));
}



int main(){

    int value[] = {100, 50, 150};
    int wt[] = {30, 20, 10};
    int n = 3, W = 50;
    
    cout << knapsack(value, wt, n, W);



    return 0;
}