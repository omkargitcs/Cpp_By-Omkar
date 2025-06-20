#include<iostream>
#include<vector>
using namespace std;
/*selection sort : repeatedly find the minimum element in array & place it at beginning until array is sorted till n-1 passes 
in i th iteration we select element for i th position 
time complexity = n(n-1)/2 o(n^2)
space complexity = O(1) 
it is unstable sorting algo 
application = max swaps O(n)*/
void selection_sort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_idx]){
                min_idx=j;
            }
        }

        //placing the min element at beginning

        if(i!=min_idx){
            swap(v[i],v[min_idx]);
        }
    }
    return ;

}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    selection_sort(v);

    for(int i=0;i<=n;i++){
        cout<<v[i]<<" ";

    }cout<<endl;

    return 0;
}