#include<iostream>
#include<vector>
using namespace std;
//space complexity = O(n)
//time complexity =    O(log n)

int Binarysearchrecursive(vector<int> &input ,int target,int lo,int hi){//recursive implementation 
    //space complexity = o(logn)
    //time com = o(logn)
    if(lo>hi)return -1;
    int mid = lo + (hi-lo)/2;
    if(input[mid]==target)return mid;
    if(input[mid] < target){
        return Binarysearchrecursive(input,target,mid+1,hi);

    }
    if(input[mid] > target){
        return Binarysearchrecursive(input,target,lo,mid-1);
        
    }
}

int binarysearch(vector<int> &input ,int target){
    int lo = 0;
    int hi=input.size()-1; // end of the seach space 

    while (lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(input[mid]==target) return mid;
        else if (input[mid]<target){
            lo = mid + 1;//discard the left of mid
        }
        else {
            hi = mid -1 ;//discard the right of mid
        }
        
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> input;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    int target;
    cin>>target;
    cout<<Binarysearchrecursive(input,target,0,n-1)<<"\n";
    return 0;
}