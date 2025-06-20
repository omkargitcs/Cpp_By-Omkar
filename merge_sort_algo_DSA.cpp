/* MERGE SORT ALGO = is recursion sorting algo in which we break problem in sub problem 
and comboine it by solving the sub problem to one again 
time complexity = n log ^n 2

space com= O(n) n log n 
application = lagre data sets/  linked list
slower fro smaller task 
also takes o(n) extra space 
goes to traverse all array even if it sorted */
#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int l,int mid,int r){
    int an=mid-l+1;
    int bn=r-mid;
    int a[an];
    int b[bn];
    
    for(int i=0;i<an;i++){
        a[i]=arr[l+i];
        
    }
    for(int j=0;j<=bn;j++){
        b[j]=arr[mid+1+j];
    }
    int i=0;//initial indx of 1st sub array
    int j=0;//initial indx of 2st sub array
    int k=l;//merged array 
    while(i<an &&j<bn){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while(i<an){
         arr[k++]=a[i++];
        }
    while(j<bn){
        arr[k++]=b[j++];
    }
}
void mergesort(int arr[],int l,int r){
    if(l>=r){
        return ;
    }
    int mid=(l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
int main(){
    int arr[]={10,28,24,6,34,18,38,44};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
}