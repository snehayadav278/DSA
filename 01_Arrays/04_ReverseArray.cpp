#include <iostream>
using namespace std;

// Reverse array using two-pointer approach
// Time Complexity: O(n)
// Space Complexity: O(1)
void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start < end){
        swap(arr[start] , arr[end]);  // swap elements
        start++;
        end--;
    }
}

int main(){
    int arr[] = {4, 3, 6, 8, 1, 9, 2};
    int size = 7;

    reverseArray(arr, size);  // function call

    // print reversed array
    for(int i=0; i<size ; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;


    return 0;
}