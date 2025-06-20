//target sum
#include<iostream>
using namespace std;
//function for finding second largest number;
int largestElementIndex(int array[],int size){
    int max=INT32_MIN;
    int maxindex=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;
}
int main(){


    //target sum
 
    /*int array[]={1,2,3,4,5,6,7};
    int targetsum=7;
    int size=7;
    int pairs=0;
    for(int i =0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]+array[j]==targetsum){
                pairs++;
            }
        }
    }
    cout<<pairs<<endl;*/

    //triplets

    /*int arr[]={2,3,4,5,6,7,8};
    int targetsum=7;
    int size=7;
    int triplets=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==targetsum){
                    triplets++;
                }
            }
        }

    }
    cout<<triplets<<endl;*/

    /*int arr1[]={1,2,3,4,3,2,1};
    int size=7;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr1[i]==arr1[j]){
                arr1[i]=arr1[j]=-1;
            }
        }
    }
    for(int i=0;i<size;i++){
        if(arr1[i]>0){
            cout<<arr1<<endl;
            
        }
    }
    cout<<arr1<<endl;*/


    //to find seconf largest number ;
    /*int arr2[]={2,3,5,7,6,1,7};
    int n=7;
    int indexofLar = largestElementIndex(arr2,7);
    cout<<arr2[indexofLar]<<endl;
    //arr2[indexofLar]=-1;
    int largestelement=arr2[indexofLar];
    for(int i=0;i<n;i++){
        if(arr2[i]==largestelement){
            arr2[i]=-1;
        }
    }

    int indexofsecondlar=largestElementIndex(arr2,7);
    cout<<arr2[indexofsecondlar]<<endl;*/

    //rotate array 'a' by k steps e.g= 1,2,3,4,5 it should look like 5,1,2,3,4 : 4,5,1,2,3 and so on 
    int arr3[]={1,2,3,4,5};
    int n=5;
    int k=2;
    k=k%n;

    int ansarray[5];
    int j = 0;

    for(int i=n-k;i<=n;i++){
        ansarray[j++]=arr3[i];
    }

    for(int i=0;i<=k;i++){
        ansarray[j++]=arr3[i];

    }

    for(int i =0 ;i<n;i++){
        cout<<ansarray[i]<<" ";
    }
    cout<<endl;
   
    
    
    return 0;
}