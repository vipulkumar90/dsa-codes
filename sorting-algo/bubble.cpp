#include<bits/stdc++.h>
using namespace std;
void printArray(int[], int);

void bubble(int arr[], int n){
    for (int i = 0; i<n-1; i++){
        cout<<"Pass "<<i+1<<" : "<<endl;
        for (int j = 0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                cout<<"( ";
                printArray(arr, n);
                cout<<")";
                swap(arr[j], arr[j+1]);
                cout<<" -> ( ";
                printArray(arr, n);
                cout<<")"<<endl;
            }
        }
    }
}

void bubbleOpt(int arr[], int n){
    for (int i = 0; i<n-1; i++){
        bool swapped = false;
        for (int j = 0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if (!swapped){
            break;
        }
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr)/sizeof(int);
    
    bubbleOpt(arr, n);
    cout<<"complete sorted:\n";
    printArray(arr, n);
    return 0;
}