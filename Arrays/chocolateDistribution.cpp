// Geeks For Geeks

// Given an array of N integers where each value represents the number of chocolates in a packet.
// Each packet can have a variable number of chocolates.There are m students, the task is to distribute
// chocolate packets such that :

// Each student gets one packet.The difference between the number of chocolates in the packet with
// maximum chocolates and the packet with minimum chocolates given to the students is minimum.

// C++ program to solve chocolate distribution
// problem

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int findMinDiff(int arr[], int n, int m){
    if(m == 0 || n == 0){
        return -1;
    }
    
    //sorted array
    sort(arr, arr+n);

    int minDiff = INT_MAX;

    //finding the min sub array 
    for(int i = 0 ; i + m - 1 < n ; i++){
        if(arr[i+m-1]  - arr[i] < minDiff){
            minDiff = arr[i + m - 1] - arr[i];
        };
    }
    return minDiff;
}

int main()
{
    int arr[] = {7, 3, 2, 4, 9, 12, 56}, m = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum difference is "
         << findMinDiff(arr, n, m);
    return 0;
}


