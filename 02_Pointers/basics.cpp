#include <iostream>
#include <vector>
using namespace std;

void changeD(int *ptr){
        *ptr = 20;
    }

int main(){
    int a = 10;
    cout << &a << endl;


    int b = 20;
    int* ptr = &b;
    cout << ptr << endl;
    cout << &b << endl;

    // pointer to pointer
    int c = 10;
    int* ptr1 = &c;
    int** parPtr = &ptr1;
    cout  << &ptr1 << endl;
    cout << parPtr << endl;

    // * => dereference operator(value at address)
    cout << *(&a) << endl;
    cout << *(ptr) << endl;

    //NULL Pointer
    // int** ptr2 = NULL;
    // cout << *ptr2 << endl;


    // pass by reference
    int d = 10;
    changeD(&d);
    cout << "inside main fnx : " << d << endl;


    // Array Pointer
    int array[] = { 1, 2, 3, 4, 5};
    cout << array << endl;
    cout << *array << endl;

    
    //Pointer arithmetic
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;   // points to first element

    cout << "Base address: " << p << endl;
    cout << "Value at base: " << *p << endl;

    // Move pointer
    p++;
    cout << "After p++ address: " << p << endl;
    cout << "Value: " << *p << endl;

    // Jump multiple steps
    p = p + 2;
    cout << "After p+2 address: " << p << endl;
    cout << "Value: " << *p << endl;

    // Access using arithmetic
    cout << "*(arr + 3): " << *(arr + 3) << endl; // 4

    // Traversing array using pointer
    cout << "Array using pointer: ";
    for(int i = 0; i < 5; i++){
          cout << *(arr + i) << " ";
    }
    cout << endl;

    return 0;

}