#include<iostream>

using namespace std;

int binarySearch(int arr[], int left, int right, int x){
    while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
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
