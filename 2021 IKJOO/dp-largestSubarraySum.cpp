#include<bits/stdc++.h>
using namespace std;
void largestSubarraySum(int* arr, int n){
    int current_sum = 0;
    int best_sum = 0;
    for(int i=0; i<n; i++){
        current_sum += arr[i];
        if(best_sum < current_sum){
            best_sum = current_sum;
        }
        if(current_sum<0){
            current_sum = 0;
        }
    }

    cout << "Largest sum of subarray in given array is: "<<best_sum;

}
int main(){
    int n;
    cin >> n;
    int* arr = new int[n+1];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    largestSubarraySum(arr, n);
    return 0;
}
