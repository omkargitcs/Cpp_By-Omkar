#include<iostream>
#include<climits>
using namespace std;
 class node{
    public:
    int data;
    node* next;
    node(int d){
        this->data=d;
        this->next = NULL;
    }
 };
 class stack{
    node* head;
    int capacity;
    int currSize;
    public:
    stack(int c){
        this->capacity=c;
        this->currSize=0;
        head = NULL;
    }
    bool isEmpty(){
        return this->head == NULL;
    }
    bool isFull(){
        return this->currSize == this->capacity;

    }
    void push(int data){
        node* new_node = new node(data);
        new_node->next = head;
        head = new_node;
        this->currSize++;
    }
    int pop(){
        if(this->head ==NULL){
            cout<<"underflow";
            return INT_MIN;
        }
        node* new_head = this->head->next;
        this->head->next = NULL;
        node* toberemoved = this->head;
        int result=toberemoved->data;
        head=head->next;
        delete toberemoved;
        this->head = new_head;
        return result;
    }
    int gettop(){
        if(this->head ==NULL){
            cout<<"underflow\n";
            return INT_MIN;
        }
        return this->head->data;

    }
    int size(){
        return this->currSize;
    }
 };
 int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.gettop()<<"\n";
    st.push(4);
    st.push(5);
    cout<<st.gettop()<<"\n";
    
    st.pop();
    st.pop();
    cout<<st.gettop()<<"\n";
    return 0;

   
 }