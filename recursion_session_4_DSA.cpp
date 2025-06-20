#include<iostream>
using namespace std;
void f(int n){//printing numbers of n limit 
    if(n<1)return ;
    f(n-1);
    cout<<n<<"\n";
}
void fe(int n,int k){
    if(k==0)return ;
    fe(n,k-1);//function correctly prints first k-1 multiples 
    cout<<(n*k)<<"\n"<<endl<<" ";
}
int alternateadd(int n){//n is alternate add like 1+2-3+4-5+6-7+8-9+10
    if(n==0)return 0;
    return alternateadd(n-1)+((n%2==0)?(-n):(n));
}
int main(){
    f(5);
    fe(5,10);
    cout<<alternateadd(10)<<"\n";
    

    return 0;

}