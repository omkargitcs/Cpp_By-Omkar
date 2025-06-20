#include<iostream>
using namespace std;
int f=8;
int main(){//inside this there will be local varibles like a ,b,c,d

    /*int a,b,c,d;
 

    cout<<"enter tghe values of a: "<<endl;
    cin>>a;
    cout<<"enter the value of b :"<<endl;
    cin>>b;
    cout<<"enter the value of c : "<<endl;
    cin>>c;
    d=a+b+c;
    cout<<"the sum of 3 var is"<<d<<endl;
    //if want t access the global varible use :: after << - e.g
    cout<<"the sum of 3 var is "<<::f;
    
    float h=78.09F;
    long double y=78.09L;
    cout<<"the value of d is"<<h<<endl<<"the value of e is"<<y; 
    cout<<"the size of 78.09 is"<<sizeof(78.09)<<endl;
    cout<<"the size of 78.09f is"<<sizeof(78.09f)<<endl;
    cout<<"the size of 78.09F is"<<sizeof(78.09F)<<endl;
    cout<<"the size of 78.09l is"<<sizeof(78.09l)<<endl;
    cout<<"the size of 78.09L is"<<sizeof(78.09L)<<endl;
    //89.07 //by default it is a double value 
    //if want to convert into float use it as 
    //89.07f //now it is a float
    // 89.07l is long double*/


    //************************references variables************ */

    float x=566;
    float & y=x;
    cout<<x;
    cout<<y<<endl;

    ////**********type casting ******** */
    int a=56;
    float b= 78.09;
    cout<<"the float value of int 56 is "<<float(a)<<endl;
    cout<<"the float value of  b is "<<int(b);
    

    return 0;
}
