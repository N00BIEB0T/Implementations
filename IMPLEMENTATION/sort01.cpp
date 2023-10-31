#include<iostream>
using namespace std;

void printArray( int arr[], int n ){
    for (int i =0; i <n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortArr(int arr[], int n){

    int left = 0, right = n-1;

    while(left < right ){

        while(arr[left] == 0 && left < right){
            left++;
        }

        while (arr[right] == 1){
            right--;
        }

        // counter will reach here only if  arr[left] == 1 and arr[right] == 0, so now we need to swap those:
        if(left < right){

            swap(arr[left], arr[right]);
            left++;
            right--;

        }
    }
}

int main() {

    int a[20] = {1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0};

    sortArr(a, 20);
    printArray(a, 20);  

    return 0;
}