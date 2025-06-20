#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
string countsort(string str){

    vector<int> freq(26,0);

    for(int i=0;i<str.length();i++){//storing frequency of every character
        int index = str[i]-'a';
        freq[index]++;
    }

    int j=0;
    for(int i=0;i<26;i++){//create sorted array 
        while(freq[i]--){
            str[j++]=i + 'a';
        }
    }
    return str;
}
int main(){
    string str;
    cin>>str;
    cout<<countsort(str)<<endl;


}