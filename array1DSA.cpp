/*array has contiguous memerory access is done using index start from 0 location of memerory 
datatype arrname [arr size]
*/
#include<iostream>
using namespace std;
int main(){
    /*int arr[10]={1,34,56,98,87,45,98,07,76,51};
    cout<<arr[2]<<endl;
    int r=sizeof(arr);
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int idx=0;idx<size;idx++){
        cout<<arr[idx]<<endl;
    }
    for(int ele:arr){
        cout<<ele<<endl;
    }

    int index=0;
    while(index>size){
        cout<<arr[index]<<endl;
        index++;
    }*/

    /*char vowel[5];
    for(int idx=0;idx<5;idx++){
        cin>>vowel[idx];
    }
    char vowel[5];
   for(char &ele:vowel){
    cin>>ele;
   }

    
    for(int idx=0;idx<5;idx++){
        cout<<vowel[idx]<<" ";
    }

    int arr[4]={34,56,12,30};
    int sum=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        sum+=arr[i];
        
    }cout<<sum<<endl;

    int arr[5]={34,56,12,30,70};
    int max=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl;*/


    //linear search :
    int arr[5]={34,56,12,30,70};
    int key=70;

    int ans=-1;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;

    





    return 0;
}