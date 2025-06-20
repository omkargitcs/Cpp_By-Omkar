#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //int a=3;
    //char c='o';
    //cout<<"thevalue of a is"<<a;
    //a=0;
    //c='p';
    //cout<<"the value of a is"<<endl;;
    //constants in c++ 
    //const int u=34;
    //cout<<"hvyy"<<u;
   // u=0;you will get an error because u is constant 
    //cout<<u;

    //manipulators in C++ 
    //1 - endl
    //2- it s in <iomanip>
    //int a=8,b=96,c=7894;
    //cout<<"the value of a without setw() is "<<a<<endl;
    //cout<<"the value of b without setw() is "<<b<<endl;
    //cout<<"the value of c without setw() is "<<c<<endl;

    //cout<<"the value of a is "<<setw(4)<<a<<endl;
    //cout<<"the value of b is "<<setw(4)<<b<<endl;
    //cout<<"the value of c is "<<setw(4)<<c<<endl;

    //*operator preference  */

    int a=9,b=8;
    int c=(((a*5)+b-45)+87);
    cout<<"the value updated value of c is = "<<c << endl;
   
    return 0;
}