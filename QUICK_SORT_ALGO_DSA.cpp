/* quick sort - divide the problem into subproblems conquer solve the subproblems 
compare solutions of subproblems 
we choose a pivot element (middle element) dividethe in sub and solve it 
pivot element can be first last middle or random element and how to choose it impacts the complexity of algo 
default choose last element as pivot to divide the array
example : 10,3,7,9,1,8 so pivot element is 8 now 
we take i - to insert element < pivot at the beginning 
j- to find the element < pivot 
we increment i++ first starting from i-1 and when i is less then pivot element we swap i & j
now we put the pivot element on right place i+1 because after it all element are > than pivot element 
not a stable sorting algorithm 
applied to where memory is comcern inbuilt sorting algorithm 
perform smaller fro smaller datasets*/
#include<iostream>
#include<vector>
using namespace std;

int partition(int arr[],int first,int last ){
    int pivot=arr[last];
    int i=first-1;//inserting elements to < pivot
    int j= first ;// finding the element < pivot 

    for(;j<last;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    //now i is pointing to the last ele < pivot 
    //correct position for pivot will be = i+1
    swap (arr[i+1],arr[last]);
    return i+1;
}

void quicksort(int arr[],int first ,int last){
    if(first>=last){
        return ;
    }
    int pi=partition(arr,first,last);
    quicksort(arr,first,pi-1);
    quicksort(arr,pi+1,last);
}
int main(){
    int arr[]={20,12,35,16,18,30};
    int n=sizeof(arr)/sizeof(arr[0]);

    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;

    

    return 0;
}