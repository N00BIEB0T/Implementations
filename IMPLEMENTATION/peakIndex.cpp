#include<iostream>
using namespace std;

int peakIndex(int arr[], int n){

    int start = 0, end = n - 1;
    int mid = start + (end - start)/2;

    while (start < end){
        
        if(arr[mid] < arr[mid + 1]){

            start = mid + 1;

        }

        else{

            end = mid;

        }

        mid = start + (end - start)/2;

    }

    return start;

}

int main(){

    int arr[8] = {1, 2, 5, 9, 13, 20, 10, 3};

    cout << "The peak index of the given array is " << peakIndex(arr, 8);

}