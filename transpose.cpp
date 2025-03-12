#include<bits/stdc++.h>
using namespace std;
int main(){
     int r,c;
     cout<<"enter the dimensions of matrix(rows,col)::";
     cin>>r;cin>>c;
     int matrix[r][c];
     cout<<"enter the matrix::"<<endl;
     for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            cin>>matrix[row][col];
        }
     }
     int new_matrix[c][r];

     for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            new_matrix[col][row]=matrix[row][col];
        }
     }
    
     for(int row=0;row<c;row++){
        for(int col=0;col<r;col++){
            cout<<new_matrix[row][col]<<" ";
        }
       cout<<endl;
     }
  

    return 0;
}