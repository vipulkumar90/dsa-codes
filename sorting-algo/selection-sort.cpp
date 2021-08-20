#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){

    for (int i = 0; i<n-1; i++){

        int min_idx = i;
        for (int j = i+1; j<n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

void stableSelectionSort(int arr[], int n){
    for (int i = 0; i<n-1; i++){
        int min = i;
        for (int j = i+1; j<n; j++){
            if (arr[j] < arr[min])
                min = j;
        }

        int key = arr[min];
        while (min > i){
            arr[min--] = arr[min - 1];
        }
        arr[i] = key;
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int arr[] = {10, 64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(int);
    
    stableSelectionSort(arr, n);
    printArray(arr, n);
    return 0;
}