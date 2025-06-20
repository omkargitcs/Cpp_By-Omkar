#include<iostream>
using namespace std;//to solve the highest common factor of sum we use euclids algo 
//EUNCLIDS ALGO - if we subtract a smaller number from a larger number (we can reduce the larger number)

//but hcf/GCD does not change 
//e,g= gcd(72,54)=(54,72-54) or gcd(a,b)=gcd(b,a%b);
int gcd(int a,int b){
    if(b>a)return gcd(b,a);
    if(b==0)return a;
    return gcd(b,a%b);

}
int power_recursive (int p,int q){//armstrong - 1 function 
    if(q==0) return 1;
    if(q%2==0){
        int result=power_recursive(p,q/2);
        return result*result;
    }
    else{
        int result=power_recursive(p,(q-1)/2);
        return result*result;
    }
}
int f(int n,int d){
    if(n==0)return 0;
    return power_recursive(n%10,d)*f(n/10,d);
}

int main(){
    //cout<<gcd(40,48);
    int n;
    cin>>n;
    int no_of_digits=0;
    int temp=n;
    while(temp>0){
        temp=temp/10;
        no_of_digits++;

        int result = f(n,no_of_digits);
        if(result==n){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }


    }


    return 0;
}