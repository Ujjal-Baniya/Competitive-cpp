#include<bits/stdc++.h>
using namespace std;
int boards[11][11];

bool isPossible(int n, int row, int col){
    // same column
    for(int i=row-1; i>=0; i--){
        if(boards[i][col]==1){
            return false;
        }
    }

    // upper left diagonal
    for(int i=row-1,j=col-1;i>=0 && j>=0 ; i--, j--){
        if(boards[i][j]==1){
            return false;
        }
    }

    //upper right diagonal
    for(int i=row-1, j=col+1; i>=0 && j<n; i--, j++){
        if(boards[i][j]==1){
            return false;
        }
    }
    return true;
}

void nQueenHelper(int n, int row){
    if(n==row){
        // we have traversed all possible paths
        // now print all the paths
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<boards[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }

    //place queens at all possible positions and move to smaller problems
    for(int j=0; j<n; j++){
        if(isPossible(n, row, j)){
            boards[row][j] = 1;
            nQueenHelper(n, row+1);
            boards[row][j] = 0;
        }
    }
    return;
}

void placeQueens(int n){
    memset(boards, 0, 11*11*sizeof(int));

    nQueenHelper(n, 0);
}

int main(){
    int n;
    cout << "Enter number of queens: ";
    cin >> n;
    placeQueens(n);
}
