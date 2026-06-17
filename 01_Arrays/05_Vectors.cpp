#include <iostream>
#include <vector>
using namespace std;

int main(){
    //vector<int>vec;


    //vector<int> vec = {1,2,3};
    //cout<< vec[0];


    // vector<int> vec(5,0);
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;
    // cout << vec[4] << endl;


    // vector<char> vec = {'a' , 'b', 'c', 'd', 'e'};
    // for(char val : vec){ //for each loop
    //     cout << val << endl;
    // }


    // vector<char> vec = {'a' , 'b', 'c', 'd', 'e'};
    // cout << "size = " << vec.size() << endl;

    // vector<int> vec;
    // cout << "size = " << vec.size() << endl;
    // vec.push_back(15);
    // vec.push_back(25);
    // vec.push_back(35);
    // vec.push_back(45);
    // cout << "after push_back , size = " << vec.size() << endl;

    // vec.pop_back(); //45

    // for(int val : vec){
    //     cout << val << endl;
    // }

    // cout << vec.front() << endl;

    //  cout << vec.back() << endl;

    //  cout << vec.at(1) << endl;
    //  cout << vec.at(2) << endl;

    
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;



    return 0;
}