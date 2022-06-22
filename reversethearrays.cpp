#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]){
            start++;
            end--;

        }
    }
}
// priting the arrays 
void pritingarrays(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;

    }

}

int main(){

    // for odd 
    int odd[5]={2,7,9,5,6};

    // for even 
    int even[6]={1,2,3,4,5,6};

    reverse(even,6);
    reverse(odd,5);

    pritingarrays(even,6);
    pritingarrays(odd,5);
    
       
}