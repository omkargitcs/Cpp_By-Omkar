//advantages of circular linked list we can traverse from any where to print all nodes until we reach visisted node
//when we have to traverse linked list in circular fashion
//it will be like
//class node {
/*class nnode {
int val;
node* next;
node* prev;
};
only condition is tail->next = head;*/
//insertion at kth point in circular ll at start
#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    
    node(int data){
        val = data;
        next = NULL;
    }
};
class CircularLinkedList{
    public:
    node* head;
    CircularLinkedList(){
        head=NULL;
    }
    void display(){
        node* temp = head;
        do{
            cout<<temp->val<<"->";
            temp = temp->next;

        }while(temp!=head);
        cout<<endl;
    }
    void iscircular(){
        node* temp=head;
        for(int i=0;i<15;i++){
            cout<<temp->val<<"-";
            temp=temp->next;
        }cout<<endl;
    }
    void insertAtStart(int val){
        node* new_node = new node(val);
        if(head==NULL){
            head=new_node;
            new_node->next = head;//circular linked list
            return;
        }
        node* tail = head;
        while(tail->next!=head){
            tail=tail->next;
        }
        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }
    void insertAtEnd(int val){
        node* new_node = new node(val);
        if(head==NULL){
            head=new_node;
            new_node->next=head;
            return;
        }
        node* tail = head;
        while(tail->next!=head){
            tail=tail->next;
        }
        //here tail will be pointing to the last
        tail->next = new_node;
        new_node->next = head;
    }
    void deletionAtEnd(){
        if(head==NULL){
            return;
        }
        node* tail=head;
        while(tail->next->next!=head){
            tail=tail->next;
        }
        //here tail is pointing to the second last node
        node* temp = tail->next;
        tail->next=head;
        free(temp);
        
    }
    void deletionAtstart(){
        if(head==NULL){
            return;
        }
        node* temp = head;
        node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        head=head->next;
        tail->next=head;
        free(temp);
    }
};


int main(){
    CircularLinkedList cll;
    cll.insertAtStart(3);
    cll.insertAtStart(4);
    cll.insertAtStart(5);
    cll.insertAtStart(6);
    cll.display();
    //cll.iscircular();+
    cll.insertAtEnd(7);
    cll.display();
    cll.deletionAtstart();
    cll.display();
    cll.deletionAtEnd();
    cll.display();

    return 0;
}

