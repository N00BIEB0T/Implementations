//book allocation problem
#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid){

    int studentCount = 1;
    int pageSum = 0;
    
    for(int i = 0; i < n; i++){

        if(pageSum + arr[i] <= mid){
                                                //check if we allocate next book to the students then will it be greater than "mid"
            pageSum += arr[i];                  //until pageSum less than mid we allocate pages to the same students

        }

        else{

            studentCount ++;                    // if we cannot allocate pages to same students then increase the student count
            
            if(studentCount > m || arr[i] > mid){       //if student count greater than "m(total students)" then it's not a possible solution 
                                                        //or if number of pages greater than mid than also return false since it cannot be a possible solution
                return false;

            }
            pageSum = arr[i];

        }

    }

    return true;

}

int allocBook(vector<int> arr, int n, int m){

    int s = 0;

    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    } 

    int e = sum;

    int mid = s + (e - s)/2;

    int ans = -1;
    
    while(s <= e){

        if(isPossible(arr, n , m, mid)){

            ans = mid;                              
            e = mid - 1;                //all the solutions towards right are possible since there will be more  pages on the right side so we move towards left

        }

        else{

            s = mid + 1;                //go to right side since there are more number of pages so there will be more to divide amongst students

        }

        mid = s +(e - s)/2;

    }

    return ans;

}

int main(){

    vector<int> arr = {10, 20, 30, 40};

    cout << "Minimum pages allocated is: " << allocBook(arr, 4, 2);

    return 0;
}