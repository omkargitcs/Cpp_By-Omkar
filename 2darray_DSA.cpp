//multidimensional array datatype arrayname size[row] size[col] 
//int arr[4][3]; in 1D we use index  in 2D array we use two index 
// by specifying row and col a[i][j];
// int array [2][3]={1,2,3,4,5,6}  as 2x3=6
//other wise int array [2][3]={{1,2,3},{4,5,6}};
//to take input in 2d array 
/*for(int i=0;i<row;i++){
//     for(int j=0;j<cols;j++){
cin>>arr[i][j];
}
}*/
#include<iostream>
#include<vector>
              
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arry[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arry[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arry[i][j]<<" ";
        }cout<<endl;
    }

}


