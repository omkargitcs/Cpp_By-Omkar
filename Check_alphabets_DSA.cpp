#include<iostream>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;

bool checkAllAlphabets(string s){
    if(s.length()<26){
        return false;
    }
    transform(s.begin(),s.end(),s.begin(),::tolower);

    set<char> alphabets;
    for(auto ch:s){
        alphabets.insert(ch);

    }
    return (alphabets.size()==26);
}

int main(){
    string input;
    cin>>input;

    if(checkAllAlphabets(input)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
/*unordered set : values are stored in unordered fashion 
unique values , values will be identified by itself , values cannot be modified when inside in set time compo : O(1) for insertion,del,search

insert : single ele: o(1) avg , o(n) worst
dele : single o(1) , worst o(n) , 
find : o(1) avg, o(n) worst
count : o(1) avg ,o(n) worst*/