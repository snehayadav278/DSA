#include <iostream>
using namespace std;

// Linear Search: checks each element one by one
// Time Complexity: O(n)

int LinearSearch(int arr[] , int size, int target){
    for(int i=0 ; i<size; i++){
        if(arr[i] == target){
            return i;   // return index if element found
        }
    }

    return -1;  // return -1 if element not found

}

int main(){
    int arr[] = {4, 2 , 5, 6, 7, 9};
    int size = 6;
    int target = 7;

    // calling function and printing result
    cout << LinearSearch(arr , size , target) <<endl;

    return 0;
}