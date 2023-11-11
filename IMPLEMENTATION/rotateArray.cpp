#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> &arr, int k){

    vector<int> temp(arr.size());

    for(int i = 0; i < arr.size(); i ++){

        temp[(i+k) % arr.size()] = arr[i];

    }

    arr = temp;

}

void print(vector<int> v){

    for(int i = 0; i < v.size(); i ++){

        cout << v[i] << " ";

    }
    cout << endl;
}

int main(){

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

    rotate(arr, 2);

    print(arr);


    return 0;
}