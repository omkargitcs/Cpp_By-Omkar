/*QUEUES : FIFO FIRST IN FIRST OUT OR FCFS : FIRST COME FIRST Serve queues is data structure is fifo or fcfs queue ia a linear data str
enqueue : helps us to add new element 
dqueue : this help to remove ele
isfull 
isempty
front():gives us the ele which came first
size()
it doesn't have array indexing 

types of queue
simple queue: 
priority queue
circular queue : front and back are connected
double ended queue : we can remove and insert the data from back and front both*/
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class queue{
    node* head;
    node* tail;
    int size1=0;
    public:
    queue(){
        this->head=NULL;
        this->tail=NULL;
    }
    void enqueue(int data){
        node* newNode=new node(data);
        
        if(this->head==NULL){
            //LL is empty
            this->head=this->tail=newNode;
        }else{
            this->tail->next=newNode;
            this->tail=newNode;
        }
        this->size1++;
    }

    void dequeue(){
        if(this->head==NULL){
            return;
        }else{
            node* oldhead=this->head;
            node* newhead = this->head->next;
            this->head = newhead;
            if(this->head==NULL)this->tail=NULL;
            oldhead->next = NULL;
            delete oldhead;
        }
    }
    int getsize(){
        return this->size1;
    }
    bool isempty(){
        return this->head==NULL;
    }
    int getfront(){
        if(this->head==NULL) return -1;
            return this->head->data;
        
    }

};

int main(){
    queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.dequeue();
    qu.enqueue(40);

    while(not qu.isempty()){
        cout<<qu.getfront()<<" ";
        qu.dequeue();
    }
}
