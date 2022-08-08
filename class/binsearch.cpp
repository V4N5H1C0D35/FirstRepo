#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid = start + (end-start)/2;

    while (start<= end){
        if (arr[mid] ==key){
            return mid;
        }
        if (key < arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int even[8]={0,1,2,3,4,5,6,7};
    int odd[5]={0,3,5,6,9};
    int eve=binarysearch(even,8,6);
    int od=binarysearch(odd,5,0);
    cout<<eve << "\n";
    cout<<od << "\n";
return 0;
}