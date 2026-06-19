#include <iostream>
#include <vector>
using namespace std;

// Function to find indices of two numbers whose sum = target
// Brute Force Approach (O(n^2))
vector<int> pairSum(vector<int> nums , int target){
    vector<int> ans;
    int n = nums.size();


    // Check all possible pairs
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){

            // If pair found, return indices
            if(nums[i]+nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return {}; // return empty if no pair found
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> ans = pairSum(nums,target);
    
    // Check before accessing to avoid runtime error
    if(ans.size() == 2){
        cout << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }


    return 0;
}