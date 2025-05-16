# Coin-Change---Minimum-Coins-to-Make-Sum
Given an array of coins[] of size n and a target value sum, where coins[i] represent the coins of different denominations. You have an infinite supply of each of the coins. The task is to find the minimum number of coins required to make the given value sum.
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int minicoinchange(vector<int>&arr,int i, int sum)
    { if(i == arr.size()-1){
         if(sum % arr[i] == 0)
            return sum / arr[i];
        else
            return 1e9; 
    }
   
    int taken = 1e9; 
    if(arr[i] <= sum)
        taken = 1 + minicoinchange(arr, i, sum - arr[i]);
     int notTaken =  minicoinchange(arr, i +1, sum);   
   
    return  min(notTaken, taken);
}
int main() {

    vector<int> arr = {1,2,3};
    int sum = 7;
                                 
    cout << minicoinchange(arr, 0, sum);
    return 0; 
}

