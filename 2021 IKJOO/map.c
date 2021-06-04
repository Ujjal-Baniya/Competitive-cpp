#include<iostream>
#include<map>

using namespace std;

int main(){
    map <int, int> m;
    int arr[] ={1,2,3,1,2,1,3,4,5};
    for(int i=0; i<arr.size(); i++){
        m[arr[i]]++;
    }
}
