#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,c1,r2,c2; 
    cout<<"enter the dimensions of matrix 1(rows,col.)";
    cin>>r1;cin>>c1;
    int matrix1[r1][c1];
    cout<<"enter the dimensions of matrix 2(rows,col.)";
    cin>>r2;cin>>c2;
    int matrix2[r2][c2];
    cout<<endl;

    if (c1==r2){
    cout<<"enter the first matrix::"<<endl;
    for(int row=0;row<r1;row++){
        for(int col=0;col<c1;col++){
            cin>>matrix1[row][col];
            
        }
    }
    cout<<endl;
    cout<<"enter the second matrix::"<<endl;
    for(int row=0;row<r2;row++){
        for(int col=0;col<c2;col++){
            cin>>matrix2[row][col];
        }
    }
    cout<<endl;
    int new_matrix[r1][c2];
    for(int row=0;row<r1;row++){
      for(int col=0;col<c1;col++){
        new_matrix[row][col]=0;
        for(int k=0;k<c1;k++){
           new_matrix[row][col]+=matrix1[row][k]*matrix2[k][col];
        }
        
      }
    }
    cout<<"the product of matrix1 and matrix2 is::"<<endl;
    cout<<endl;
    for(int row=0;row<r1;row++){
        for(int col=0;col<c2;col++){
          cout<<new_matrix[row][col]<<" ";
       }
    cout<<endl;
    }
     } 


    else {
    cout<<"matrix multiplication is not possible since col. of first matrix is not equal to rows of matrix 2"<<endl;
    }
    
    return 0;
 }