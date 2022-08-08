#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int s=0;
    for(int i=0;i<size;i++){
        s=s+arr[i];
    }
    return s;
}

int main(){
    int size;
    cout<<"Enter the size of array";
    cin>>size;

    int num[100];
    for (int i=0; i<size;i++){
        cout<<"Enter the element";
        cin>>num[i];
    }
    
    int g=sum(num,size);
    cout<<g;
    return 0;
}