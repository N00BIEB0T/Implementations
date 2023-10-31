#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortArr(int arr[], int n){
    
    int low = 0, mid = 0, high = n-1;

    for (int i = 0; i < n){

        if (arr[mid] == 0){

        swap(arr[mid], arr[low]);
        
        low++;
        mid++;

        }

        if(arr[mid] == 1){
        
        mid++;
    
        }

        if(arr[mid] == 2){

        swap(arr[mid], arr[high]);

        high--;

        }

    }
}

int main(){
    
    int arr[6] = {2, 0, 2, 1, 1, 0};
    
    sortArr(arr, 6);
    
    printArr(arr, 6);

    return 0;

}