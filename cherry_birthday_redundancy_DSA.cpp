#include<iostream>
#include<set>
#include<vector>

using namespace std;
int main(){
    set <string> invitelist;
    int n;
    cin>>n;
    while(n--){
        string name;
        cin>>name;

        invitelist.insert(name);
    }
    cout<<"printing invitelite";
    for(auto name:invitelist){
        cout<<name<<endl;
    }
}