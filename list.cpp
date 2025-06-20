#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l1 = {1,2,3,4,5};
    auto itr = l1.begin();
    cout<<*itr<<endl;
    //list.rbegin() - iterator for the first ele of reverse list
    //list.rend()-iterator for the end ele of reverse list
    //advances(itr,n)- advances the itr by n places 
    advance(itr,2);
    cout<<*itr<<endl;
    //traversal in list: 
    for(auto num:l1){//using range based loop
        cout<<num<<endl;
    }
    //using iterators
    for(auto itr=l1.begin();itr!=l1.end();itr++){
        cout<<*itr<<" ";
    }cout<<endl;

    //reverse traversal
    for(auto itr=l1.rbegin();itr!=l1.rend();itr++){
        cout<<*itr<<" ";
    }cout<<endl;

    //inserting ele into list :
    //  list.insert(itr,val) = insett value before the position of the itr
    //list.insert(itr,count,value)- insert value count number of times before itr; 2 times 5 is inserted 
    // list.insert (itr,str_itr,end_itr)-insert values from str_itr end_itr beforeitr

    //inserting ele
    advance(itr,2);//(itr,val
    l1.insert(itr,5,3);//(itr,count,value)
    auto l = l1.begin();
    auto r = l1.begin();
    advance(r,2);//(itr,str_itr,end_itr)
    l1.insert (itr,l,r);
    

    for(auto itr=l1.rbegin();itr!=l1.rend();itr++){
        cout<<*itr<<" ";
    }cout<<endl<<endl;

    auto s_itr = l1.begin();
    advance(s_itr,2);
    auto e_itr = l1.begin();
    advance(e_itr,4);
    l1.erase(s_itr,e_itr);
    for(auto itr=l1.rbegin();itr!=l1.rend();itr++){
        cout<<*itr<<" ";
    }cout<<endl<<endl;


    return 0;
}