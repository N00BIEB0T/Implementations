#include<iostream> 
#include<vector>
using namespace std;

void moveZeroes(vector<int> &arr){

    int i = 0;
    for(int j = 0 ; j < arr.size(); j ++){

        if(arr[j] != 0){

            swap(arr[j], arr[i]);
            i++;

        }

    }
    
}

void print(vector<int> v){

    for(int i = 0; i < v.size(); i ++){

        cout << v[i] << " ";

    }
    cout << endl;
}

int main(){

    vector<int> arr = {1, 0, 3, 12, 0};

    moveZeroes(arr);
    
    print(arr);    
    
    return 0;
}