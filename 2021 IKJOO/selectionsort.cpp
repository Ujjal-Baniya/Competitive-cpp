#include<iostream>
using namespace std;

int* selectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int mi = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[mi]){
                mi = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mi];
        arr[mi] = temp;
    }
    return arr;
}

int main()
{
    int n;
    cout <<"Enter Number of elements: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int* a = selectionSort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout << a[i]<<" ";
    }

}
