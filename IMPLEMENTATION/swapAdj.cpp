#include<iostream>
using namespace std;

int main(){
    int a[8] = {2, 1, 4, 3, 6, 5, 8, 7};

     cout << "Enter the elements of the array " << endl;
    
//swapping the adjacent elements
    for( int i = 0; i < 8; i+=2 ){

        if( (i + 1) < 8 ){

            swap( a[i], a[i + 1] );

            
        
        }
    }

    cout << "This is the array you entered :-" << endl;

    for ( int i = 0; i < 8; i++ ){
     
        cout << a[i] << " ";
    
    }

    return 0;

}