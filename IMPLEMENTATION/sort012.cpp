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

    while(mid <= high){

        // //for debugging purposes:
        // int step = 1;
        // cout << "STEP " << step++ << endl;
        // printArr(arr, n);

        if (arr[mid] == 0){

        swap(arr[low], arr[mid]);
        
        low++;
        mid++;

        }

        else if(arr[mid] == 1){
        
        mid++;
    
        }

        else if(arr[mid] == 2){

        swap(arr[mid], arr[high]);

        high--;

        }
    }
}

int main(){
    
    int arr[10] = {2, 0, 2, 1, 1, 0, 1, 2, 2, 0};
    
    sortArr(arr, 10);
    
    // cout << "Final Sorted Array:" << endl;
    printArr(arr, 10);

    return 0;

}