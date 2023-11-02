// search element in a sorted and rotated array

#include<iostream>
#include<vector>
using namespace std;

class pivSortRot
{
public:

    int findKey(vector<int>& arr, int s, int e, int key){

    int start = s;
    int end = e;
    int mid = start + (end - start)/2;


    while ( start <=end){

        if(arr[mid] == key){
            return mid;
        }

        if(key > mid){
            start = mid + 1;
        }

        else{
            end = mid -1;
        }

        mid = start + (end - start)/2;

    }

    return -1;
}

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

    int keyIndex(vector<int>& arr, int n, int key){

        pivSortRot help;                    //creation of an object of  pivSortRot class
        int pivInd = help.findPivot(arr);   //use of first function in order to get pivot of the array
        
        if(key >= arr[pivInd] && key <= arr[n-1]){
            //binary search on second line
            return findKey(arr, pivInd, n - 1, key);

        }

        else{
            //binary search on first line
            return findKey(arr, 0, pivInd - 1, key);

        }
        
    }
};

int main(){

    vector<int> arr = {7, 9, 1, 2, 4};
    
    pivSortRot obj;
    int pivInd = obj.findPivot(arr);
    int reqInd = obj.keyIndex(arr, 5, 4);

    cout << "The pivot element of the given array is at index " << pivInd << endl;

    cout << "The index of key in the given array is " << reqInd << endl;

    return 0;

}
