#include<iostream>
using namespace std; 

int main() {

    int size;
    cout << "Enter the size of array ";
    cin >> size;
    
    int arr[size];    
    cout<< "Enter the array: ";
    
    //input elements
    for( int i = 0; i < size; i ++ ){
        cin >> arr[i];
    }

    int key;
    cout << "enter the number you want to search for ";
    cin >> key;

    for( int i = 0; i < size; i++ ){
        if ( arr[i] == key ){
            cout << "The index of the element is " << i << " and the element is " << arr[i];
        }
    }

    return 0;
}