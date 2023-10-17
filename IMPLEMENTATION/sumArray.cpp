#include<iostream>
using namespace std;

int main() {

    //input size of array
    int size;
    cout << " enter the size of array" << endl;
    cin >> size;

    int num[size];

    //input for array
    for ( int i = 0; i <size; i++ ) {
        cin >> num[i];
    }

    int sum = 0;
    for ( int i = 0; i < size; i++ ){
        //sum of elements
        sum = sum + num[i];
    }

    cout << "The sum of the elements of the given array is " << sum << endl;

    return 0;

}