#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    // GENERATE ALL SUBARRAYS [O(n^3)]
    // Total subarrays = n(n+1)/2

    // for(int st=0; st<n ; st++){
    //     for(int end=st; end<n ; end++){

    //         // Print subarray from index st to end
    //         for(int i=st; i<=end; i++){
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }



    //MAX SUBARRAY SUM (Optimized Brute Force)
    // Time Complexity: O(n^2)

    // int maxSum = INT_MIN;
    // for(int st=0; st<n; st++){
    //     int currSum = 0;
    //     for(int end=st; end<n ; end++){
    //         currSum += arr[end];
    //         maxSum = max(currSum, maxSum);
    //     }
    // }
    // cout<< "max subarray sum = " << maxSum <<endl;



    // KADANE'S ALGORITHM : O(n)

    int currentSum = 0 ;
    int maxSum = INT_MIN;
        for(int i = 0; i < n; i++) {
            currentSum += arr[i];
            maxSum = max(maxSum, currentSum);
            
            if(currentSum < 0) {
                currentSum = 0;
            }
        }
        cout << "Max subarray sum = " << maxSum << endl;



    return 0;
}

