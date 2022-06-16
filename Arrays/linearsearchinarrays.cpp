#include<iostream>
using namespace std;
bool linearsearch(int arr[],int n,int key){
    
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;

        }
    }
    return 0;

}

int main(){
    // initalising the size of the arrays
    int size;
    cout<<"Enter the length of the arrays "<<endl;

    cin>>size;

    // initalisation of the arrays 
    int arr[1000];


    // taking input in the arrays 
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    // entering the key to search for the elements
    int key;
    cout<<"Enter the key element to search for ";
    cin>>key;

    bool found=linearsearch(arr,size,key);

    if(found){
        cout<<"The element is present in the arrays "<<endl;

    }
    else{
        cout<<"the element is not present in the arrays "<<endl;

    }

}