#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>pascaltriangle(int n){
    vector<vector<int>>pascal(n);
    for(int i=0;i<n;i++){
       pascal[i].resize(i+1);
       for(int j=0;j<=i;j++){
        if(j==0||j==i){
            pascal[i][j]=1;
        }
        else{
        pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
        }
    }
    }
    return pascal;

}

int main(){
    
    //to initialize a 2d vector is like - 

    //2d vector is vector if vector datatype 
    //vector <vector<int>> v (3,vector<int> 4);
    //given n =5 print a pascal triangle 

    int n;
    cin>>n;
    vector<vector<int>>ans;
    ans=pascaltriangle(n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";

        }cout<<endl;
    }
    
    return 0;
}