//time complexity 
//total time taken by code to get executed is experimental time which is to be avoided
//we talk in terms of no. of operations the no of instruction less time less more instructions more time 
#include<iostream>
using namespace std;
int sum_in_range(int x,int y){
    int result =0;
    for(int i=x;i<=y;i++){
        result+=i;
    }
    return result;
}
int sum_optimised(int x,int y){//is better solution for analysising 
    //which is also know as asymptotic analysis ; no of operation to execute a operation;
    //always care abput big input values talk in terms of no.of input of size //
    //the algo which has slow  but with consistency and less time frame : growth that will be better 

    int n=(y-x+1);
    int a=x;
    int result=(n*(2*a+(n-1)+1))/2;
    return result;
}
int main(){
    cout<<sum_optimised(2,6);
    return 0;
}
/*types of time complexity 
worst case time complexity- n instructions denoted by - big O - o for omkar 
best case - 1 instruction - big OMega
average case - somewhwere in middle you got output - big theta
space complexity - it is the extra space requirement of algorithm using asymtotoc analysis  */ 
