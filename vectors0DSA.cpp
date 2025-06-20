/*vectors are dyanmic arrays means you can resize array i realtime 
basic ops in vectors - declaration 
#include<vector>
vector <datatype> vector_name;
vector <datatype> vector_name(size);
v.size()-length;
v.resize(newsize)-new length;
v.capacity()is the size allocated to the memory capacity is incremented in power of 2 
eg= size=1;cap=1
sise=2;cap=2;
size=3;cap=4;
to add elements - v.push_back(elements)-2,3,4 - pushback(5)-2,3,4,5;
v.insert (position,elements)-v.insert(2,5)
v.begin();/v.begin()+2 or something;
v.end();
v.pop_back()-2,3,4-v.pop-back(4)-2,3;-to delete 
v.erase(position);
v.clear()*/
#include<iostream>
#include<vector>
using namespace std;
int main(){

    /*vector<int> v;
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;

    //looping in vectors 
    vector <int> v1;

    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v1.push_back(element)  ; 
    }

    for(int i=0;i<v1.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v1.insert(v1.begin()+2,6);
    v1.erase(v1.end()-2);
    int idx=0;
    while(idx<v1.size()){
        cout<<v1[idx++]<<" ";
    }
    cout<<endl;*/

    vector <int> v2(6);
    /*cout<<"enter the 6 number to find last occurence";
    for(int i=0;i<6;i++){
        cin>>v2[i];
    }

    cout<<"enter x";
    int x;
    cin>>x;

    int occurence=-1;
    for(int i=0;i<v2.size();i++){
        if(v2[i]==x){
            occurence=i;
        }
    }*/
   /*cout<<"enter the number for first number";
   for(int i=0;i<=6;i++){
    cin>>v2[i];
   }
   
    cout<<"enter x";
    int x;
    cin>>x;
    int occurence =1;

    for(int i=v2.size()-1;i>=0;i--){
        if(v2[i]==x){
            occurence=i;
        }//for first occurence 
    }
    
    cout<<occurence<<endl;*/

   /* cout<<"enter the number for first number";
   for(int i=0;i<=6;i++){
    cin>>v2[i];
   }
   
    cout<<"enter x";
    int x;
    cin>>x;
    int occurence =0;

    for(int ele:v2){
        if(ele==x){
            occurence++;
        }
    }
    
    cout<<occurence<<endl;*/

    /*int array[]={1,2,3,4,5,6,7,8};

    bool sortedflag=true;
    for(int i=1;i<8;i++){
        if(array[i]<=array[i-1]){
            sortedflag=false;
        }

    }
    cout<<sortedflag<<endl;*/

    int arr[]={ 1,2,3,4,5,6};
    int answersum=0;
    for(int i=0;i<6;i++){
        if(i%2==0){
            answersum+=arr[i];

        }
        else{
            answersum-=arr[i];
        }
    }
    cout<<answersum<<endl;
    return 0;
}

