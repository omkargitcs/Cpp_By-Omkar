#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* we uniformely distribute the elements we find the element and multiple with size of arr and according to that we set up 
scatter and gather where we didvide the elemnt in bucket of size n 
we insert arr element into bucket index= arr[i]*n 
and then sort indiviual buckets 
combine all elements */
void bucketsort (float arr[],int size){
    vector<vector<float>> bucket (size,vector<float>());//step 1
    //finding range 
    float max_ele=arr[0];
    float min_ele=arr[0];
    for(int i=1;i<size;i++){
        max_ele=std::max(max_ele,arr[i]);
        min_ele=std::min(min_ele,arr[i]);
    }
    float range=(max_ele-min_ele)/size;

    //step 2 inserting element
    for(int i=0;i<size;i++){
        int index=(arr[i]-min_ele)/range;
        //boundary element
        float diff=(arr[i]-min_ele)/range-index;
        if(diff==0 && arr[i]!=min_ele){
            bucket[index-1].push_back(arr[i]);
    }else{
         bucket[index].push_back(arr[i]);

    }
    

    //step3 sorting individual buckets 
    for(int i=0;i<size;i++){
        if(!bucket[i].empty()){
           sort(bucket[i].begin(), bucket[i].end());

        }
    }

    //step 4 combining element from bucets 
    int k=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[k++]=bucket[i][j];
        }
    }

}
}
int main(){
    float arr[]={0.13,0.45,0.12,0.89,0.75,0.63,0.85,0.39};
    int size = sizeof(arr)/sizeof(arr[0]);
    bucketsort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}