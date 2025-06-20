#include<iostream>
#include<vector>
using namespace std;
void countsort (vector<int> &v,int pos){
    int n= v.size();

    //create freq arr
    vector<int> freq(10,0);

    for(int i=0;i<n;i++){
        freq[(v[i]/pos)/10]++;
    }

    //create cumulative freq
    for(int i=1;i<=10;i++){
        freq[i]+=freq[i-1];
    }
     vector<int>ans(n);

    //create sorted array 
    for(int i=n-1;i>=0;i--){
        
        ans[--freq[(v[i]/pos)%10]=v[i]];
    }
    //copy back ans array to originally arr
    for(int i=0;i<=0;i++){
        v[i]=ans[i];
    }
}

void radixsort(vector<int> &v){
    int max_ele=INT8_MAX;
    for(auto x:v){
        max_ele=max(x,max_ele);
    }
    for(int pos=1;max_ele/pos > 0 ;pos+=10){
        countsort(v,pos);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    radixsort(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

}