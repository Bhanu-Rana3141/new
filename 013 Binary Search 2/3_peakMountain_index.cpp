#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    cout << "Enter array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;

    while(start < end){
        if(arr[mid] < arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    cout << start;
}