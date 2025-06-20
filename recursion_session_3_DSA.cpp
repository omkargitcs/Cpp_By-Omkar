#include<iostream>
using namespace std;
  void f (int *arr,int idx,int n){
        if(idx==n)return ;
        cout<<arr[idx]<<"\n";
        f(arr,idx+1,n);
    }
    int fe(int *arr1,int idx,int m){
        if(idx==m-1){
            return arr1[idx];
        }
        return max(arr1[idx],fe(arr1,idx+1,m));
    }
int main(){
    //most of thimes o=to solve a problem on array we have to read the array //given array print all the ele recursively 
    int n=5;
    int arr[]={2,3,4,5,6,7,8};
    //f(arr,0,n);
    int arr1[]={5,6,7,8,9,43,98};
    int m=3;
    cout<<fe(arr,0,m)<<endl;
    
    return 0;
}