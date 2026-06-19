#include <iostream>
#include <vector>
using namespace std;

// Function to find indices of two numbers whose sum = target
// Brute Force Approach (O(n^2))
vector<int> pairSumBrute(vector<int> nums1 , int target1){
    vector<int> ans1;
    int n1 = nums1.size();


    // Check all possible pairs
    for(int i=0; i<n1; i++){
        for(int j=i+1; j<n1; j++){

            // If pair found, return indices
            if(nums1[i]+nums1[j] == target1){
                ans1.push_back(i);
                ans1.push_back(j);
                return ans1;
            }
        }
    }
    return ans1; // return empty if no pair found
}


// Optimal Approach (Two Pointer) — O(n)
// NOTE: Array MUST be sorted

vector<int> pairSumOptimal(vector<int> nums2 , int target2){
    vector<int> ans2;
    int n2= nums2.size();

    int i = 0; 
    int j = n2-1;
    while(i<j){
        int pairSum = nums2[i]+nums2[j];
        if(pairSum > target2){
            j--;
        }else if(pairSum < target2){
            i++;
        }else{
            ans2.push_back(i);
            ans2.push_back(j);
            return ans2;
        }
    }
    return ans2;
}



int main(){
    vector<int> nums1 = {2,7,11,15};
    int target1 = 9;

    // Call brute
    vector<int> ans1 = pairSumBrute(nums1,target1);

    // Output (Brute)
    cout << ans1[0] << ", " << ans1[1] << endl;
     

    vector<int> nums2 = {2, 7, 11, 15};
    int target2 = 13;

    // call optimal
    vector<int> ans2 = pairSumOptimal(nums2, target2);

    // output (Optimal)
    cout << ans2[0] << ", " << ans2[1] << endl;


    return 0;
}