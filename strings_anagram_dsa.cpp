#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;

bool isanagram (string s1,string s2){
    vector<int> freq(26,0);
        if(s1.length()!=s2.length()){//if length of both is not equal then return false
            return false;

        }
        
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++; //for s1 we are incrementing freq char;
            freq[s2[i]-'a']--; //for s2 we are decremeneting the value ;
        }

        for(int i=0;i<26;i++){
            if(freq[i]!=0){
               return false; 
            }
        }
    return true;

    
}

int main(){
    string s1,s2;
    cin>>s1>>s2;

    if(isanagram(s1,s2)){
        cout<<"it is a anagram"<<endl;
    }else{
        cout<<"it is not a anagram"<<endl;
    }
}