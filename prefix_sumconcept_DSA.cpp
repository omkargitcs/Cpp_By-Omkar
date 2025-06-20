//prefix sum is like e.g{ 5,4,3,2,1} its hould be like { 5,9,12,14,15}

#include<iostream>
#include<vector>
using namespace std;

void sumarray(vector <int> &v){
    for(int i=1;i<v.size();i++){
        v[i]=v[i-1]+v[i];
    }
}
int main(){
    /*int n;
    cin>>n;

    vector <int> v;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sumarray(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;*/

    
    return 0;

}

