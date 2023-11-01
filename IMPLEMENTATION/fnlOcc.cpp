#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){

    int start = 0, end = n - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){

        if(arr[mid] == key){

            ans = mid;
            end = mid -1;   // we need to get the first occurence so we need to traverse the array to the left of our mid
            
        }

        else if( arr[mid] > key) {
            
            end = mid - 1;
        
        }

        else{

            start = mid + 1;
        
        }

        mid = start + (end - start)/2;

    } 

    return ans;

}

int lastOcc(int arr[], int n, int key){

    int start = 0, end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){

        if(arr[mid] == key){

            ans = mid;
            start = mid + 1;    //we need to get the last occurence so we need to traverse the array to the right of our mid
            
        }

        else if( arr[mid] > key) {
            
            end = mid - 1;
        
        }

        else{

            start = mid + 1;
        
        }

        mid = start + (end - start)/2;

    } 

    return ans;

}

int main(){

    int arr[11] = {1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 5};

    cout << "The first occurence of  3 is at index " << firstOcc(arr, 11, 3) << endl;
    cout << "The last occurence of 3 is at index " << lastOcc(arr, 11, 3) << endl;

}