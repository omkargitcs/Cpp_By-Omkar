#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

void lexigraphical(char fruit[][60],int n){
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<=n;j++){
            if(strcmp(fruit[min_idx],fruit[j])>0){
                min_idx=j;
            }
        }

        if(i!=min_idx){
            swap(fruit[i],fruit[min_idx]);

        }
    }
}
int main(){
    char fruit[][60]={"papaya","lime","watermelon","apple","mango","kiwi"};
    int n=sizeof(fruit)/sizeof(fruit[0]);
    lexigraphical(fruit,n);
    for(int i=0;i<n;i++){
        cout<<fruit[i]<<" ";

    }cout<<endl;
    return 0;
}