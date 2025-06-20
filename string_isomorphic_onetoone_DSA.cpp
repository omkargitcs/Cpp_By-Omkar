#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
bool isisomorphic(string s1,string s2){
    vector<int> v1(128,-1);
    vector<int> v2(128,-1);
    if(s1.size()!=s2.size()){
        return false;
    }
    for(int i=0;i<s1.size();i++){
        if(v1[s1[i]] != v2[s2[i]]){//checking if value of char at idx i match in both vector
            return false;
        }
        v1[s1[i]]=v2[s2[i]]=i;//storing string position in vector for char at idx
        
    }
    return true;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(isisomorphic(s1,s2)){
        cout<<"they are isomorphic"<<endl;
    }else{
        cout<<"they are not isomorphic"<<endl;

    }
}