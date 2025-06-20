#include<iostream>
#include<vector>
using namespace std;
/* bubble sort : sorting : ordering of the element of inc or dec order default : increasing  
to sort the the array in the same area without using extra space is bubble sort
repeatedly swap two adjacent elements if they are un wrong order
for n elements it will take n-1 passes (continuously traverse array ) to get a sorted array  
worst case of bubble sort in descending order which will be n(n-1)/2 

time and space complexity : O(n^2)-time and space o(1)

stable sort : does not disturb the order of elements of same value 
e.g= 10,20,30,40,50,30*;
output= 10,20,30,30*,40,50;

bubble sort is a stable algo;
*/
void bubble_sort (vector<int> &v){
    int n=v.size();

    for(int i=0;i<=n-1;i++){
        bool flag=false;
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                flag=true;
                swap(v[j],v[j+1]);
            }
        }
        if(!flag) break;
    }
    return ;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<=n;i++){
        cin>>v[i];
    }

    bubble_sort(v);

    for(int i=0;i<=n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;

}