// write a program to add sum of all arrays
#include<iostream>
using namespace std;

int sum(int nums[],int n){
    // initalisation
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    
    return sum;

}

int main(){
    // taking input size of the elements
    int size;
    cin>>size;

    int arr[1000];
    
    // taking input of the arrays is
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }

}