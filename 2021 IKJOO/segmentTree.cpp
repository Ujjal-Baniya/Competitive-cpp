#include<bits/stdc++.h>
using namespace std;

void buildTree(int* arr, int* tree, int start, int end, int TreeNode){
    if(start == end){
        tree[TreeNode] = arr[start];
        return;
    }
    int mid = (start + end)/2;
    buildTree(arr, tree, start, mid, 2*TreeNode);
    buildTree(arr, tree, mid+1, end, 2*TreeNode+1);

    tree[TreeNode] = tree[2*TreeNode] + tree[2*TreeNode+1];

}
int query(int* tree, int start, int end,int TreeNode, int left, int right){
    if(start>right || end < left){
        return 0;
    }
    if(start>=left && end<=right){
        return tree[TreeNode];
    }
    int mid = (start+end)/2;
    int ans1 = query(tree, start, mid, 2*TreeNode, left, right);
    int ans2 = query(tree, mid+1, end, 2*TreeNode+1, left, right);
    return ans1+ans2;
}
void updateTree(int* arr, int* tree, int start, int end, int TreeNode, int idx, int value){
    if(start == end){
        arr[idx] = value;
        tree[TreeNode] = value;
        return;
    }
    int mid = (start + end)/2;
    if(idx<mid){
        updateTree(arr, tree, start, mid, 2*TreeNode+1, idx, value);
    }
    else{
        updateTree(arr, tree, mid+1, end, 2*TreeNode, idx, value);
    }
    tree[TreeNode] = tree[2*TreeNode] + tree[2*TreeNode+1];

}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int* tree = new int[10];
    buildTree(arr, tree, 0, 4, 1);
    updateTree(arr, tree, 0, 4, 1, 2, 10);
    for(int i=1; i<10; i++){
        cout << tree[i] << endl;
    }
    int ans = query(tree, 0, 4, 1, 2, 4);
    cout << "Sum between 1-4: "<<ans;
}
