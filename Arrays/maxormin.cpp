#include<bits/stdc++.h>

using namespace std;
int getmax(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];

        }
    }
    return max;

}
int getmin(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];

        }
    }
    return min;

}

int main(){
    // initailse the size of the arrays 
    int n;
    cin>>n;

    int arr[1000];

    // taking input in the arrays
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    cout<<"maximum number is "<<getmax(arr,n);
    cout<<"minumun number is "<<getmin(arr,n);
}

