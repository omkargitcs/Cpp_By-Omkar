#include<iostream>
#include<vector>
using namespace std;
/* repeatedly takes lements from unsorted array and insert in sorted array 
time complexity = O(n^2)worst case and in best case = O(n)
space complexity = O(n)
applications 
array is already sorted few elements are unsorted 
is a stable */
void insertion_sort(vector<int>&v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int current_ele = v[i];
        //find the current position for our curr element
        int j=i-1;
        while(j>0 && v[j]>current_ele){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=current_ele;
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

    insertion_sort(v);

    for(int i=0;i<=n;i++){
        cout<<v[i]<<" ";

    }cout<<endl;

    return 0;
}