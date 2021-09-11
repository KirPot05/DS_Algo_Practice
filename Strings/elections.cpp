// Given an array of names (consisting of lowercase characters) of candidates in an election. A candidate name in array   represents a vote casted to the candidate. Print the name of candidate that received Max votes. If there is tie, print lexicographically smaller name.

// Example 1:

// Input:
// n = 13
// Votes[] = {john,johnny,jackie,johnny,john 
// jackie,jamie,jamie,john,johnny,jamie,
// johnny,john}
// Output: john 4
// Explanation: john has 4 votes casted for 
// him, but so does johny. john is 
// lexicographically smaller, so we print 
// john and the votes he received.
// Example 2:

// Input:
// n = 3
// Votes[] = {andy,blake,clark}
// Output: andy 1
// Explanation: All the candidates get 1 
// votes each. We print andy as it is 
// lexicographically smaller.

// Your Task:
// You only need to complete the function winner() that takes an array of strings arr, and n as parameters and returns 
// the name of the candiate with maximum votes and the number of votes the candidate got as an array of size 2.


#include <bits/stdc++.h>
using namespace std;

void resultElection(string votes[], int n){

    map<string, int> result;
    
    int maxi = INT_MIN;


    for(int i=0; i<n; i++){
        result[votes[i]]++;
    }

    for(auto it = result.begin(); it != result.end(); it++){
        maxi = max(maxi, it->second);
    }   


    //While Loop Approach
    auto it = result.begin();

    while(it -> second != maxi){
        it++;
    }

    cout << it ->first << " " << it -> second << endl;


    // For Loop Approach
    
    // for(auto it = result.begin(); it != result.end(); it++){
    //     if(it->second == maxi){
    //         cout << it -> first << " " << it -> second;
    //         return;
    //     }
    // }   

}   


int main(int argc, char const *argv[])
{
    /* code */
    
    string votes[] = {"andy", "black", "white"};
    int n = 3;

    resultElection(votes, n);

    return 0;
}
