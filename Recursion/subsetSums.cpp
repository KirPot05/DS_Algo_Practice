// Given a list arr of N integers, print sums of all subsets in it.

// Example 1:

// Input:
// N = 2
// arr[] = {2, 3}
// Output:
// 0 2 3 5
// Explanation:
// When no elements is taken then Sum = 0.
// When only 2 is taken then Sum = 2.
// When only 3 is taken then Sum = 3.
// When element 2 and 3 are taken then
// Sum = 2+3 = 5.
// Example 2:

// Input:
// N = 3
// arr = {5, 2, 1}
// Output:
// 0 1 2 3 5 6 7 8

#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

vector<int> subsetSums(vector<int> arr, int N)
{
    // Write Your Code here
    vector<int> ans;

    return ans;
}

int main()
{

    return 0;
}

/*

    Method 1 (Recursive)
    We can recursively solve this problem. There are total 2n subsets. For every element, we consider two choices, we include it in a subset and we don’t include it in a subset. Below is recursive solution based on this idea.



*/

// C++ program to print sums of all possible
// subsets.
// #include <bits/stdc++.h>
// using namespace std;

// // Prints sums of all subsets of arr[l..r]
// void subsetSums(int arr[], int l, int r, int sum = 0)
// {
//     // Print current subset
//     if (l > r) {
//         cout << sum << " ";
//         return;
//     }

//     // Subset including arr[l]
//     subsetSums(arr, l + 1, r, sum + arr[l]);

//     // Subset excluding arr[l]
//     subsetSums(arr, l + 1, r, sum);
// }

// // Driver code
// int main()
// {
//     int arr[] = { 5, 4, 3 };
//     int n = sizeof(arr) / sizeof(arr[0]);

//     subsetSums(arr, 0, n - 1);
//     return 0;
// }