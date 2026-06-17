#include <iostream>
using namespace std;

// Arrays are passed by reference (actually as pointers)
// So changes inside function will reflect in original array

void changeArr(int arr[] , int size){
    cout << "in function\n" ;
    for(int i=0 ; i<size ; i++){
        arr[i] = 2* arr[i];   // modifying original array
    }
}

int main(){
    int arr[] = { 1, 2 , 3};

    changeArr(arr , 3);  // passing array

    cout << "in main\n";
    for(int i=0 ; i<3 ; i++){
        cout << arr[i] << " "; // values changed here
    }
    cout<<endl;

    return 0;
}

