#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3){

    arr3.clear();

    int i = 0, j = 0, k = 0;

    while(i < arr1.size() && j < arr2.size()){

        if(arr1[i] < arr2[j]){

            arr3.push_back(arr1[i]);
            i ++;

        }

        else{

            arr3.push_back(arr2[j]);
            j ++;

        }

    }

    while(i < arr1.size()){

        arr3.push_back(arr1[i]);
        i ++;

    }

    while(j < arr2.size()){

        arr3.push_back(arr2[j]);
        j ++;
        
    }

}

void print(vector<int> v){

    for(int i = 0; i < v.size(); i ++){

        cout << v[i] << " ";

    }
    cout << endl;
}

int main(){

    vector<int> arr1 = {1, 3, 5, 7, 9};
    vector<int> arr2 = {2, 4, 6};
    vector<int> arr3;

    merge(arr1, arr2, arr3);

    print(arr3);
    

    return 0;
}
