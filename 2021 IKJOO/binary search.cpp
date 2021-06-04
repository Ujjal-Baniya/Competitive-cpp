#include<iostream>

using namespace std;

int binarySearch(int arr[], int low, int high, int num){
    if(high>=low){
        int mid = low + (-low+high)/2;
        if(num == arr[mid]){
            return mid;
        }
        if(num < arr[mid]){
            return binarySearch(arr, low, mid-1, num);
        }
        return binarySearch(arr, mid+1, high, num);
    }
    return -1;
}

int main(){
    int n, num;
    cout << "\n Enter number to elements : ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "\n Enter element at "<<i+1<<": ";
        cin >> arr[i];
    }
    cout << "\n Enter number to be searched: ";
    cin >> num;
    int result = binarySearch(arr, 0, n, num);
    if(result==-1){
        cout << "\n Not Found";
    }
    else{
        cout << "\n Found at "<< result+1;
    }
}
