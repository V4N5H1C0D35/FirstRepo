#include<iostream>
using namespace std;

int main(){
    int nums[6]={1,2,5,2,1};
    int ans = 0;
        for(int i=0; i<6;i++){
            ans=ans^nums[i];
        } 
        for(int i=1; i<7;i++){
            ans=ans^i;
        
        }
       cout<<ans; 
return 0;
    
}