#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    int arr2[100];
    int j =0;
    for(int i = size -1; i >= 0; i--){
        arr2[j]= arr[i];
        j++;
    }
    for (int x =0; x<size; x++){
        cout << arr2[x]<< " ";
    }
}
int main(){
    
  bool arr3[3] = {1,0,1};

    return 0;
}