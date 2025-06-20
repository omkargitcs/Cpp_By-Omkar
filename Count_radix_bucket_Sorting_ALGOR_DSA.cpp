#include<iostream>
#include<vector>
using namespace std;
/*count sort says store the frequency of each element by making a another arr for freq of n+1 
example arr is of 5 then till 5 we store each number occurence in the array and further we will add the current with previous element 
like for arr= 5,2,3,2,1
frequency arr will be = 0,1,2,1,0,1 now like cumulative freq we keep on adding * which will be 0,1,3,4,4,5 first find max element 
then create freq arr 
then cumulative frequency and add up frequency */
void countsort (vector<int> &v){
    int n= v.size();
    int max_ele=INT8_MIN;
    for(int i=0;i<n;i++){
        max_ele=max(v[i],max_ele);
    }
    //create freq arr
    vector<int> freq(max_ele+1,0);

    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }

    //create cumulative freq
    for(int i=1;i<=max_ele;i++){
        freq[i]+=freq[i-1];
    }
     vector<int>ans(n);

    //create sorted array 
    for(int i=n-1;i>=0;i++){
        
        ans[--freq[v[i]]==v[i]];
    }
    //copy back ans array to originally arr
    for(int i=0;i<=0;i++){
        v[i]=ans[i];
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    countsort(a);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;

    
}