#include<iostream>
using namespace std;
int f(int n){
    if (n==1){
        return 1;
    }
    return n*f(n-1);
   
}
int main(){

    int result =f(5);
    cout<<result;
    


    return 0;
}
/* in recursion we try to find solution to bigger prob;em by 
solving the smaller /sub problem we represent these functions in the form of functions 
and this functions calls it self to solve sub problems 

principle of mathematical induction : prove sum of first n natural no. is  n+(n+1)/2
then try base case the answer we already know it 
assumption : we assume that this will work perfectly 
selfwork 

f(n)=n*f(n-1) : representing the problem in mathematical formula is called recurrence problem
to calculate the time= no.of times function called x no.of times each fucntion consumed to call 
T=O(N)Xc;
space gets introduced due to call stack interative space complexitity can be better even if recursive is easy 
to implement 
space is used more in recursive 

syntax:
methodName (N parameters)//bigger problem{
if (haltcondition){  //base case
return result
}
return methodName(N parameters)//assumption 
}
//bigger problem

*/