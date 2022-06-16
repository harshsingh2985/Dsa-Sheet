// finding the maxiumum or miniumum using predefined function
#include<bits/stdc++.h>
using namespace std;

int getmax(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);

    }
    return maxi;


}

int getmin(int arr[],int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);

    }
    return mini;

}

int main(){
    // taking input arrays size;
    int size;
    cin>>size;

    int arr[1000];

    // taking input in the arrays 
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"the maximum element in the arrays is "<<getmax(arr,size);

    cout<<"The mininum element in the arrays is "<<getmin(arr,size);
    

}