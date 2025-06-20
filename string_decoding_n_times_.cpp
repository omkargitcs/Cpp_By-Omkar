/*
extract str from result 
reverse str 
remove last char
extract digit/num from result till s[i]>='0' && <='9' 
reverse num
convert num string to int 
insert str in result for int_nums times

example : s=3[b2[ca]]
result = "bcacabcacabcaca"
str= bcaca
num = 3
int_num = stoi(num) for converting string to integer*/

#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;

string decodedstring(string s){
    string result = "";
    //traver the encoded string
    for(int i=0;i<s.length();i++){
        if(s[i]!=']'){
            result.push_back(s[i]);
        }else{
            //extract str from result
            string str = "";
            while(!result.empty() && result.back()!='['){
                str.push_back(result.back());
                result.pop_back();
            }

            //reverse the str 
            reverse(str.begin(),str.end());

            //remove last char from result which is [
            result.pop_back();
            //extract num from result 
            string num = "";
            while(!result.empty() && (result.back()>='0' && result.back()<='9')){
                num.push_back(result.back());
                result.pop_back();
            }

            //reversing the num 
            reverse (num.begin(),num.end());

            //convert str to num
            int int_num = stoi(num);

            //inserting str in result int_times
            while(int_num){
                result+=str;
                int_num--;
            }
        }
    }
    return result;

}

int main(){
    string str;
    cin>>str;
    cout<<decodedstring(str)<<endl;

    return 0;
}


