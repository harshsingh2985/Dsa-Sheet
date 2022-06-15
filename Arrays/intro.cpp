#include<iostream>
using namespace std;

// function for the priting the arrays
void pritingarrays(int arr[],int n){
    cout<<"priting the arrays"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }
}

int main(){
    // declartion of an arrays
    int arr[10];

    // accessing an arrays element
    // cout<<"value at 0 is "<<arr[0]<<endl;
    // cout<<"value at 9 is"<<arr[9]<<endl;


    // initalisation in the arrays 
    int third[15]={2,7,3};
    int n=15;
    pritingarrays(third,15);

    // taking input in the arrays elements
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    
}