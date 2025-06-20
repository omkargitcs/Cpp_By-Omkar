//template allows us to pass datatype as parameter 
//syntax = template <typename T>
//class node{
//T val ;
//node* next;} 
//STL : STANDARD TEMPLATE LIBRARY :set of template classes for implementing commonly used data structures & functions
//vector<int><char>
//3 major components : containers,iterators,algorithms
/* containors: used to hold data of hte same type vector class that defines a dynamic array e.g list ,vector,map :used
to store unique key value pairs
sets - used to store uniquw values

iterators : used to iterate/traverse the containers 
vector<int> v={1,2,3,4,5} pointers like entities  
vector <int> ::iterator itr;
itr.begin()=1

Algorithms : functions that are used to manipulate data in the containers sort(),max(),min() 
template class which defines linked list in stl library is called list
declaration of list = #include<list>
list <int> rollno;
list <int> list1{1,2,3,4,5};

iterator functions : list.begin()= iteraator for first element*/

#include<iostream>
using namespace std;
template <typename T>
class node{//template class
    public:
    T val;
    node* next;
    node(T data){
        val = data;
        next = NULL;
    }

};
int main()
{
    node<int>* node1 = new node<int>(4);
    cout<<node1->val<<endl;

    node<char> node2('a');
    cout<<node2.val<<endl;
    return 0;

}