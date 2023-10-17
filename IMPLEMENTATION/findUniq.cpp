#include<iostream>
using namespace std; 

int main(){

    //array constraints
    int n;
    int arr[n];
    cout << "Enter the size of the array "; 
    cin >> n;
    
    //input array
    cout << "Enter the elements of the array " ;
    for( int i = 0; i < n; i ++ ){
        cin >> arr[i];
    }
    
    //find unique by XOR
    int ans = 0;
    for( int i = 0; i < n; i++ ){
        ans = ans^ arr[i];
    }

    //print unique
    cout <<"The unique element present in the array is " << ans;

    return 0;

}