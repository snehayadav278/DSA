#include <iostream>
#include <vector>
using namespace std;

// Function to find the majority element using Moore's Voting Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)
int majorityElement(vector<int>& nums){
    int candidate = 0;
    int count = 0;

    //find potential candidate
    for(int num : nums){
        //if count becomes 0 , new new candidate
        if(count == 0){
            candidate = num;
        }

        // increase count if same as candidate , else decrease
        if(num == candidate){
            count++;
        } else {
            count--;
        }
    }
    return candidate;
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};

    int result = majorityElement(nums);
    cout << "Majority Element : " << result << endl;
    
    return 0;
}