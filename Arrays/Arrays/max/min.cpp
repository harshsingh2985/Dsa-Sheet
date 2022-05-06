#include<bits/stdc++.h>
using namespace std;


// for maximum
int getmax(int num[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];

        }

    }
    return max;

}

// for minium
int getmin(int num[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];

        }
    }
    return min;

}


 

int main(){

    int size;
    cin>>size;

    int num[100];

    // taking input in the arrys 
    for(int i=0;i<size;i++){
        cin>>num[i];

    }

    cout<<"maximum element in the arrays is "<<getmax(num,size)<<endl;


    cout<<"minumum element in the arrays is "<<getmin(num,size)<<endl;

    
}