// Pivot element of the array from which the *sorted and rotated* arrays are created

#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int>& arr){

    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start)/2;
    
    while(start < end){

        if(arr[mid] >= arr[0]){

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
    vector<int> arr = {9, 2, 3, 4, 5, 6};

    cout << "Pivot element of the given array is " << findPivot(arr);

    return 0;
}