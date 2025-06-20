#include<iostream>
using namespace std;
int main(){
    int n=5;   //input should always be odd
    for (int line=0;line<n;line++){
        for(int i=0;i<n;i++){
            if(i==n/2)cout<<"*";
            else if(line==n/2)cout<<"*";
            else cout<<" ";


        }
        cout<<"\n";
    }cout<<"\n\n";


    int o;
    cout<<"enter row";
    cin>>o;
    int m;
    cout<<"enter col";
    cin>>m;

    for(int i=1;i<=o;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        }cout<<"\n";
    }
    return 0;
}