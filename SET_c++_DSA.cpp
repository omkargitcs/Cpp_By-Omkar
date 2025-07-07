//when we want to store some unique value in data structure set is used
//SET : STL container used to store unique values , it stores values in ordered state in inc  or dec
//no index is there in SETS to elements are identified by their own value 
// once value is inserted in set it cannot be modified immutable

//advantage of sets : unique values 
//ordered manner , dynamic size , faster where comp is o(logn)
//disadvantage : no use indexing , uses more memory , not suitable for large data sets

//declaration of set set <data-type> set_name; #include<set> 
//by default the values are stored in increasing order 
// for desc set<data type , greater <data type>> set_name;

//inserting ele set_name.insert(value); returns an iterator to the inserted value used to iterate in stl container

#include<iostream>
#include<set>
using namespace std;

int main(){
    //inserting in set
    set<int> set1;
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);
    cout<<set1.size()<<endl;
    set1.insert(3);
    cout<<set1.size()<<endl;
    set1.insert(4);
    set1.insert(5);

    //set<int>::iterator itr; //commented because below itr is alternative    //traversing a set
    for(auto itr=set1.begin();itr!=set1.end();itr++){
        cout<<*itr<<endl;
    }cout<<endl;

    for(auto value:set1){
        cout<<value<<" ";

    }cout<<endl;

    //deleting a element
    //set_name.erase(value)
    //set_name.erase(position)
    //set.name.erase(start_pos,end_pos)(deletes the from start includeing start and till end excluding the element)

    set1.erase(4);
    for(auto value:set1){
        cout<<value<<" ";

    }cout<<endl;
    //one more method by itr 
    auto itr = set1.begin();
    advance(itr,3);
    set1.erase(itr);

    auto start_itr = set1.begin();
    start_itr++;

    auto end_itr=set1.begin();
    advance(end_itr,3);

    set1.erase(start_itr,end_itr);

    for(auto value:set1){
        cout<<value<<" ";
    }cout<<endl;
    



}
