//Find the pivot index of an array 
#include<iostream>
using namespace std;

int pivotIndex(int arr[], int n){

    int sum = 0;

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];    
    }
    
    int rightSum = sum;
    int leftSum = 0;
    
    for(int i = 0; i < n; i++){

        rightSum = rightSum - arr[i];

        if(leftSum == rightSum){
            
            return i;
        
        }
        
        leftSum = leftSum + arr[i];

    }

    return -1;

}

int main(){

    int arr[3] = {2,1,-1};

    cout << "Pivot index of the given array is " << pivotIndex(arr, 3);
    

}