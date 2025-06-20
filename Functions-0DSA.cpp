/*importance of c++ to reduce redundancy , variables are dynamicaaly allocated,reusebility
user difened , standard library fuctions
return type , funcation name (parameter1,parameter 2...){
statements; function body 
} call the function from main itself
 function prototype
 e.g int add 
 int main(){

 }
 int add ( parameters )

 standard library fucntions 
 pow(a,b)
 sqrt(a) for that include <cmath>
 */
#include<iostream>
#include<cmath>

using namespace std;

int add(int num1,int num2){
    int sum = num1+num2;
    return sum;
}
int add(int num1,int num2,int num3){
    int sum = num1+num2+num3;
    return sum;
}
float add(float num1,float num2){
    int sum = num1+num2;
    return sum;
}

int main(){
    int a=5;
    int b=4;
    cout<<add(a,b)<<endl;
    cout<<sqrt(76)<<endl;
    cout<<pow(3,4)<<endl;

    return 0;
}