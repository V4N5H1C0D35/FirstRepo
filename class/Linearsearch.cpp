#include<iostream>
using namespace std;

int search (int arr[], int size, int key) {

    for( int i = 0; i<size; i++ ) {

        if( arr[i] == key) {
            return i;
        }

    }
    return -1;
}
// int size = sizeof(arr)/sizeof(int);

int main() {

    int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout <<" Enter the element to search for " << endl; 
    int key;
    cin >> key;

    /*bool found = search(arr, 10, key);

    if( found ) {
        cout <<" Key is present "<< endl;
    }
    else{
        cout <<" Key is absent " << endl;
    }
*/
cout << search(arr, 10, key);

    return 0;
}