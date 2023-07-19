#include<iostream>
using namespace std;

int max(int arr[] , int size){
    int max = 0;
    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[] , int size){
    int min = 100;
    for(int i=0; i<size; i++){
        if(arr[i] < min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int array[5];
    int size = sizeof(array)/sizeof(array[0]);
    cout<<"size: "<<size<<endl;

    cout<<"Enter array ele: ";
    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    int ans = max(array,size) + min(array,size);
    cout<<"Ans: "<<ans;

    return 0;
}