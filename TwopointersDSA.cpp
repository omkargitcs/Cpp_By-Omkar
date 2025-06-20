
//pattern : two pointers using arrays 
//sort an array consisting 0s and 1s 
#include<iostream>
#include<vector>

using namespace std;
void sort01(vector <int> &v){ // fisrt approach with only one pointer 
    int zeroes_count=0;
    for(int ele:v){
        if(ele==0){
            zeroes_count++;
        }
    }

    for(int i=0;i<v.size();i++){
        if(i<zeroes_count){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}

void sort01_2(vector <int> &v){
    int left_poin=0;
    int right_poin=v.size()-1;
    while(left_poin<right_poin){
        if(v[left_poin]==1 && v[right_poin]==0){
            v[left_poin++]==0;
            v[right_poin--]==1;
        }
        if(v[left_poin]==0){
            left_poin++;
        }
        if(v[right_poin]==1){
            right_poin--;
        }

    }
}
int main(){

    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);

    } 

    sort01_2(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";

    }
       return 0;
}