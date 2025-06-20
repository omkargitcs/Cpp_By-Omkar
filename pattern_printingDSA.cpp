#include<iostream>
using namespace std;
int main(){
    /*int n;
    cout<<"enter the number of rows";
    cin>>n;
    int m;
    cout<<"enter the number of columns";
    cin>>m;

    for(int i = 1 ; i<=n; i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        
        }
        cout<<endl;

    }*/
   /*int n,m;
   cout<<"enter rows";
   cin>>n;
   cout<<"enter cols";
   cin>>m;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(i==1||i==n||j==1||j==m){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        

    }
    cout<<endl;
   }*/

   /*int n;
   cout<<"enter the rows";
   cin>>n;
   for (int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
   }*/

   /*int n;
   cout<<"enter the rows";
   cin>>n;
   for (int i=n;i>0;i--){
    for (int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
   }*/

   /*int n;
   cout<<"enter the row";
   cin>>n;

   for(int i=1;i<=n;i++){
    for(int j=1;j<=(n-i);j++){
        cout<<" ";
    }
    for(int k=1;k<=(2*i-1);k++){
        cout<<"*";
    }
    cout<<endl;
   }*/

   //NUMERICAL PATTERN IN DSA
   /*int n;
   cout<<"enter the row";
   cin>>n;
  

   for(int i =1 ;i<=n;i++){
    for (int j=1;j<=n;j++){
        cout<<j;
    }
    for (int k=1;k<=(i-1);k++){
        cout<<k;
    }

    cout<<endl;
   }*/

   /*int n;
   cout<<"enter n";
   cin>>n;

   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<j;
    }
    cout<<endl;

    
   }*/

   /*int n,m;
   cout<<"enter n";
   cin>>n;
   cout<<"enter m";
   cin>>m;

   for (int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(i==1||i==n||j==1||j==m){
            cout<<j;
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
   }*/

   /*int n;
   cout<<"enter n";
   cin>>n;
   int m;
   cout<<"enter m";
   cin>>m;

   for(int i=1;i<=n;i++){
    for (int j=1;j<=m;j++){
        if((i+j)%2==0){
            cout<<"1";
        }
        else{
            cout<<"2";
        }
    }
    cout<<endl;
   }*/

   /*int n;
   cout<<"enter n";
   cin>>n;

   for (int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
        cout<<j;
    }
    cout<<endl;
   }*/

  /*int n;
  cout<<"enter n";
  cin>>n;

  for(int i=1;i<=n;i++){
    for(int j=1;j<=(n-1);j++){
        cout<<" ";
    }
    for(int k=1;k<=(2*i-1);k++){
        cout<<k;
    }
    cout<<endl;
  }*/

  int n;
  cout<<"enter row";
  cin>>n;

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-1;j++){
        cout<<" ";
    }
    for(int k=1;k<=2*i-1;k++){
        if(k==1||k==2*i-1||i==n||i==1){
            cout<<k;
        }
        else{
            cout<<" ";
        }

    }
    cout<<endl;
  }











    
    return 0;
}