#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    /*string str = "omkar";
    string str1 = "bhalsing";
    cout<<str<<" "<<str1<<endl;*/
    string str;
    //cin>>str;
    getline(cin,str);
    str[4];
    cout<<str[4]<<endl;
    char ch = 'm';
    cout<<int(ch)<<endl;

    reverse(str.begin(),str.end());//reverse function
   

    cout<<str<<endl;
    cout<<str.substr(1,6)<<endl;
    cout<<str.substr(1)<<endl;

    string ek = "anita";
    string doh = "karande";
    cout<<ek+doh<<endl;

    char s1[20]="svkm";
    char s2[20]="mithibai";
    strcat(s1,s2);
    cout<<s1<<endl;

    string s3="abcdbhai";
    char ch4='z';
    s3.push_back(ch4);
    cout<<s3<<endl;

    string s_1 = "memithibaimehu";
    cout<<s_1.size()<<endl;
    
    char c_h[20]="omkar";
    cout<<strlen(c_h)<<endl;

    int num = 32;
    string s1_01 = to_string(num);
    s1_01 +="876";//becames easy to append the string after converting ;
    cout<<s1_01<<endl;


}