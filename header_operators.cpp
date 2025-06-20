#include<iostream>//system header defined
// there are twpo header files which are 
// system header file comes with compiler
//user defined header files : it is written by the programmer
//use cpp reference files on google for ref 

using namespace std;


int main(){
    int a=56,b=90;
    cout<<"this is a hello world program";
    cout<<"the following are the types of operators in c++"<<endl;
    //arithmetic ops 
    cout<<"the value of a+b is"<<a+b<<endl;
    cout<<"the value of a-b is"<<a-b<<endl;
    cout<<"the value of a*b is"<<a*b<<endl;
    cout<<"the value of a/b is"<<a/b<<endl;
    cout<<"the value of a%b is"<<a%b<<endl;
    cout<<"the value of a++ is"<<a++<<endl;
    cout<<"the value of a-- is"<<a--<<endl;
    cout<<"the value of --b is"<<--b<<endl;
    cout<<"the value of b++ is"<<b++<<endl;
    cout<<endl;

    //assignment ops to assing values to var
    //comparision ops
    cout<<"the comparision ops are qwith examples ";
    cout<<"the value of a==b is"<<(a==b)<<endl;
    cout<<"the value of a!=b is"<<(a!=b)<<endl;
    cout<<"the value of a<=b is"<<(a<=b)<<endl;
    cout<<"the value of a>=b is"<<(a>=b)<<endl;
    cout<<"the value of a>b is"<<(a>b)<<endl;
    cout<<"the value of a<b is"<<(a<b)<<endl;

    cout<<"the logical ops are";
    
    cout<<"the value of a==b is "<<((a==b)&&(a<b))<<endl;
    cout<<"the value of a==b is "<<((a!=b)||(a<b))<<endl;


    return 0;
}


