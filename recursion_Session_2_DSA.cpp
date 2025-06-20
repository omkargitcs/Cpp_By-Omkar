#include<iostream>
using namespace std;
/*given an integer find out the sum of digits using recursion 
f(n)=f(n/10)+n%10;*/

//f(p,q)=p x f(p,q-1)

int f(int n){
    if(n>=0 and n<=9) return n;
    return f(n/10)+(n%10);
}
int po(int p,int q){
    if(q==0) return 1;
    return p*po(p,q-1);
}
int fe(int p,int q){//optimized approch for the power code itself 
    if(q==0)return 1;
    if(q%2==0){
        int result = fe(p,q/2);
        return result * result;
    }
    else {
        int result=fe(p,(q-1)/2);
        return p* result * result ;
    }
}

int main(){
    int result =f(2345);
    cout<<result<<endl;;
    int res=po(2,6);
    cout<<res<<endl;;
    int res1=fe(6,4);
    cout<<res1<<endl;
    return 0;


}