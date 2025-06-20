#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
//time com= o(nlogn *n) 
//space com = o(1);
string longestcommonprefix(vector<string> &str){
    sort(str.begin(),str.end());
    string s1=str[0];
    int i=0;
    string s2 = str[str.size()-1];
    int j=0;

    string ans="";
    while(i<=s1.size() && j<=s2.size()){
        if(s1[i]==s2[j]){
            ans+=s1[i];
            i++;j++;
        }
        else{
            break;
        }
    }
    return ans;
}
int main(){
    //write a pro to find longest common prefix string amongst an array of strings 
    int n;
    cout<<"enter the number of strings";
    cin>>n;

    cout<<"enter strings";
    vector<string>str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<"longest common prefix "<<longestcommonprefix(str) <<endl;

    return 0;
}