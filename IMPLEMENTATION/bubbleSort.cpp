#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n){

    for(int i = 0; i < n - 1; i ++){

        for(int j = 0; j < (n - i) - 1; j ++){

            if(arr[j] > arr[j + 1]){

                swap(arr[j], arr[j + 1]);

            }

        }

    }

}

int main(){

    vector<int> arr = {5, 6, 9, 2, 7};

    bubbleSort(arr, 5);

    for(int i = 0; i < 5; i ++){
        
        cout << arr[i] << " "; 
    
    }

}