#include<iostream>
using namespace std;

int uniq(int arr[], int size){
    int ans=0;
    for (int i=0; i<size;i++){
        ans =ans ^arr[i];
    }
    return ans;
}

int main(){
    
    int num[5]={2,8,4,8,2};
    
    int q=uniq(num,5);
    cout<<q;
    cout<<"\n";return 0;
}