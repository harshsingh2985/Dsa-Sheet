#include<iostream>
using namespace std;

void swapalternate(int arr[],int n){
    
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
// pritingthearrays
void pritingsarrays(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }cout<<endl;
    
}

int main(){
    int sunny[6]={2,4,6,8,10,9};
    int honey[5]={11,33,9,76,43};
    
    
    swapalternate(sunny,6);
    swapalternate(honey,5);
    pritingsarrays(honey,5);
    
    pritingsarrays(sunny,6);

    
}