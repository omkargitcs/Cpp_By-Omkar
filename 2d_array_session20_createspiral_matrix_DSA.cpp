#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>createspiralmatrix(int n){
    vector<vector<int>>matrix(n,vector<int>(n));
    int left=0;
    int right = n-1;
    int top=0;
    int bottom=n-1;
    int value=1;

    int direction=0;
    while(left<=right && top<=bottom){
        if(direction==0){
            for(int i=left;i<=right;i++){
                matrix[top][i]=value++;
            }
            top++;
        }
        else if(direction==1){
            for(int j=top;j<=bottom;j++){
                matrix[j][right]=value++;
            }
            right--;
        }
        else if(direction==2){
            for(int k=right;k>=left;k--){
                matrix[bottom][k]=value++;
            }
            bottom--;
        }
        else{
            for(int l=bottom;l>=top;l--){
                matrix[l][left]=value++;
            }
            left--;
        }
        direction=(direction+1)%4;

    }
    return matrix;


}

int main(){
    int n;
    cin>>n;
    vector< vector<int>> matrix(n,vector<int>(n));
    matrix=createspiralmatrix(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<" ";
            }cout<<endl;
        }
    

}