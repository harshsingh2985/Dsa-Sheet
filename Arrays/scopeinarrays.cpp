#include<iostream>
using namespace std;

void update(int arr[],int n){
    cout<<"inside the function "<<endl;
    
    arr[0]=120;
    // priting the arrays 
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" "<<endl;

    }
    cout<<"priting back to the main function"<<endl;


}

int main(){

    int arr[3]={1,2,3};

    update(arr,3);

    // priting the arrays 
    for(int i=0;i<3;i++){
        cout<<arr[i]<<"  "<<endl;

    }

}