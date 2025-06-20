/*LINKED LIST : linear data structure used to store a list of values 
a single memrory blocks linked to each others
advantages : 
dynamic size allocation and not static size 
non contiguous memory 
insertion and deletion ais non expensive 

LISTNODES : 
block of memory - node / listnode
node has two parts 
1.data
2.next pointer (pointing to next node in linked list)
100         200
[v][200]   [v][300]
head points to the first node - 100[v][200] over here 
and last node is confirmed by next is null/tail node 

types of linked list 
1.above was singly list 
2.doubly linked list every node is connected to its previous & next node 
3.circular linked list : the node points to head node also completing whole circle 

list node is not user defined data type 
class node {
int val;
node *next;
};

*/

/*challenges of array : static size 
contiguous memerory insertion and deletion is costly in array*/

/*traversal in single linked list : create a pointer a temp pointer to travers temp = temp -> next and as till temp = null

insertion at kth positionin a singly linked list time com(o(1))

*/



#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;

    node(int data){
        val = data ;
        next = NULL;
    }
};

void insertathead(node* &head,int val){
    node* new_node = new node(val);
    new_node->next=head;
    head = new_node;
}



/*to append the kth element */
void insertattail(node* head,int val){
    node* new_node1=new node(val);
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node1; //temp has reached the last
}

//insertionat_ANY_position
void insertionat_ANY_position(node* &head,int val,int pos){
    if(pos==0){
        insertathead(head,val);
        return ;
    }
    node* new_node=new node(val);
    node* temp = head;
    int current_pos = 0;
    while(current_pos!=pos-1){
        temp = temp ->next;
        current_pos++;
    }

    //temp is pointing to node at pos-1
    new_node ->next = temp->next;
    temp->next = new_node;

}

//updation at kth position in a singly linked list 
void updationatposition(node* &head,int k ,int val){
    node* temp = head;
    int curr_pos = 0;
    while(curr_pos!=k){
        temp=temp->next;
        curr_pos++;
    }
    //temp will be pointing to the kth node
    temp->val=val;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;

    }
}

//deletion of kth element 
void deletionathead(node* &head){
    node* temp = head;
    head = head->next;
    free(temp);
}
void deletionatend(node* &head){
    node* second_last = head;
    while(second_last->next!=NULL){
        second_last=second_last->next;

    }
    //now second_last points to second last node
    node* temp = second_last->next;//node to be deleted
    second_last->next=NULL;
    free(temp);
}

//deletion of node at kth position 
void deletion_at_position(node* &head,int pos){
    if(pos==0){
        deletionathead(head);
        return;
    }
    int curr_pos=0;
    node* prev=head;
    while(curr_pos!=pos-1){
        prev=prev->next;
        curr_pos++;
    }
    //prev is pointing to node at pos-1;
    node* temp=prev->next;//node to be deleted
    prev->next=prev->next->next;
    free(temp);

}
int main(){
    node* head = NULL;
    insertathead(head,2);
    display(head);
    insertathead(head,1);
    display(head);

    insertattail(head,3);
    display(head);

    insertionat_ANY_position(head,4,2);
    display(head);

    updationatposition(head,2,5);
    display(head);

    //deletionathead(head);
    //display(head);

    //deletionatend(head);
    //display(head);

    deletion_at_position(head,3);
    display(head);



    return 0;
}