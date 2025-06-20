#include<iostream>
using namespace std;\

class node{
    public:
    int val;
    node* next;

    node(int data){
        val=data;
        next=NULL;
    }
};

class linkedlist{
    public:
    node* head;
    linkedlist(){
        head=NULL;
    }
    void insert(int value){
        node* new_node=new node(value);
        if(head==NULL){
            head=new_node;
            return ;
        }

        node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }

    void display(){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }cout<<"NULL"<<endl;

    }

    
};

void deletedalternatenodes(node* &head){
    node* curr_node = head;
    while(curr_node!=NULL && curr_node->next!=NULL){
        node* temp = curr_node->next; //this is the node to be deleted'
        curr_node->next=curr_node->next->next;
        free(temp);
        curr_node=curr_node->next;
    }
      /*   ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);
    ll.insert(6);
    ll.display();*/
}

void deleteduplicatenodesinsorted(node* &head){
    node* curr_node=head;
    while(curr_node){
        while(curr_node->next && curr_node->val==curr_node->next->val){
            //delete curr->next;
            node* temp = curr_node->next;//node to be deleted
            curr_node->next=curr_node->next->next;
            free(temp);
        }
        //this loop ends when current node and next values are different
        //or linked list ends
        curr_node=curr_node->next;
        /*    linkedlist ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(2);
    ll.insert(2);
    ll.insert(4);
    ll.insert(4);
    ll.display();*/

    }
}

void reversePrint(node* head){
    //base case
    if(head==NULL){
        return ;
    }

    //recursive case
    reversePrint(head->next);
    cout<<head->val<<" "<<endl;
    /*   ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);
    ll.insert(6);
    ll.display();*/
}

//reversing a linkedlist
node* reverseLL(node* &head){
    node* preptr=NULL;
    node* curr_ptr=head;
    //curr_ptr->next = prevptr;
    //move all 3 parts by one step ahead

    while(curr_ptr!=NULL){
        node* nextptr=curr_ptr->next;
        curr_ptr->next=preptr;
        preptr=curr_ptr;
        curr_ptr=nextptr;

    }
    //whixh this loop ends preptr pointing to my last  node which is new head
    node* new_head=preptr;
    return new_head;
}

//given a head of linked list reverse the nodes of the kth at a time and return the modified list
//eg 1,2,3,4,5,6, k=2
//it should be like = 2,1 4,3,6,5;
node* reverseKth(node* &head,int k){
    node* preptr=NULL;
    node* curr_ptr=head;

    int counter =0;//for counting first k nodes
    while(curr_ptr!=NULL && counter<k){//reversing first k nodes
        node* nextptr=curr_ptr->next;
        curr_ptr->next=preptr;
        preptr=curr_ptr;
        curr_ptr=nextptr;
        counter++;
    }

//curr_otr will give  us k+1 th node
    if(curr_ptr!=NULL){
        node* new_head=reverseKth(curr_ptr,k);//recursive call
        head->next=new_head;
    }
    return preptr; //preptr will give new_head of connected linkedlist
    
}





   
int main(){
    linkedlist ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);
    ll.insert(6);
    ll.display();

    //ll.head = reverseLL(ll.head);
    ll.head=reverseKth(ll.head,2);
    ll.display();



    return 0;
}