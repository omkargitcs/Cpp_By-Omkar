#include<iostream>
using namespace std;
/*base case if(i==n) return false
 if x == n return yes on the first place itself
assumption = lets assume the function works well for f(arr,n,i+1,x) function evals whether x is present in range 
[i+1,n-1]

*/
bool f(int *arr,int n,int i,int x){
    if(i==n)return false;
    return (arr[i]==x)||f(arr,n,i+1,x);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int x=6;
    bool result = f(arr,n,0,x);
    if(result)cout<<"yes";
    else cout<<"NO";


    return 0;

}