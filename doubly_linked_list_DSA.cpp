/* DOUBLY LINKED LIST - ptr to next and previous node 
advantages
traversal both ways
insertion and deletion becomes were efiicient 

disadvantage : extra space for previous ptr 0*/

#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int val;
    node* prev;
    node* next;

    node(int data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};

class doublylinkedlist{
    public:
    node* head;
    node* tail;

    doublylinkedlist(){
        head=NULL;
        tail=NULL;
    }
    /*dll.head = new_node;
    dll.tail = new_node;
    cout<<dll.head->val<<endl;
    return 0;*/
    //insertion in starting of double linkedlist
    void insertionStart(int val){
        node* new_node = new node (val);
        if(head==NULL){
            head=new_node;
            tail==new_node;
            return ;
        }
    
        new_node->next=head;
        head->prev = new_node;
        head = new_node;
        return;
    }
    void display(){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
    //insertion at kth point 
    void insertionAtend(int val){
        node* new_node = new node(val);
        if(tail==NULL){
            head= new_node ;
            tail = new_node;
            return ;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return ;
    }
    void insertionAtPosition(int val,int k){
        node* temp = head;
        int count =1;
        while(count<(k-1)){
            temp = temp ->next;
            count ++;
        }
        //temp will be pointing to the noe at (k-1)th position
        node* new_node = new node(val);
        new_node->next = temp->next;
        temp->next = new_node;

        new_node->prev = temp;
        new_node->next->prev = new_node;
        return ;
    }
    //deletion at kth position in a doubly linked list
    void deletionAtstart(){
        if(head==NULL){
            return;
        }
        node* temp = head;
        head = head->next;
        if(head!=NULL){
            tail = NULL;
        }else{
            head->prev=NULL;
        }
        free(temp);
        return ;
    }

    //deletion_at_end
    void deletionAtEnd(){
        if(head==NULL){
            return;
        }
        node* temp = tail;
        tail = tail->prev;
        if(tail==NULL){
            head=NULL;
        }else{
            tail->next=NULL;
        }
        free(temp);
        return;
    }
    void deletedAtPosition(int k){
        //assuming k is less than equal to dll
        node* temp = head;
        int count=1;
        while(count<k);
        temp = temp->next;
        count++;
    
    //now temp is pointing to node at kth position
    temp ->prev->next=temp->next;
    temp ->next->prev = temp->prev;
    free(temp);
    return;
    }

    /* input for all insertion and deletion
        doublylinkedlist dll;
    dll.insertionAtend(1);
    dll.display();
    dll.insertionAtend(2);
    dll.display();
    dll.insertionAtend(3);
    dll.display();

    dll.insertionAtPosition(4,3);
    dll.display();
    
    dll.deletionAtstart();
    dll.display();
    dll.deletionAtEnd();
    dll.display();
    cout<<endl;
    cout<<endl;

    dll.deletedAtPosition(3);
    dll.display();


    return 0;
    */

    
};
//reverse the linked list
void reverseDll(node* &head,node* &tail){
    node* currptr=head;
    while(currptr){
        node* nextptr=currptr->next;
        currptr->next = currptr->prev;
        currptr->prev = nextptr;
        currptr=nextptr;
    }
    //swapping head and tail pointers
 /*
    node* newhead = tail;
    tail=head;
    head=newhead;
    doublylinkedlist dll;
    dll.insertionAtend(1);
    dll.insertionAtend(2);
    dll.insertionAtend(3);
    dll.insertionAtend(4);
    dll.display();
    reverseDll(dll.head,dll.tail);
    dll.display();*/
}
bool is_palindrome(node* head,node* tail){
    while(head!=tail && tail!=head->prev){
        if(head->val!=tail->val){
            return false;
        }
        head=head->next;
        tail=tail->prev;
    }
    return true;
}
void delete_same_neighbour_node(node* &head,node* &tail){
    node* currNode = tail->prev;
    while(currNode!=head){
        node* prevNode=currNode->prev;
        node* nextNode=currNode->next;
        node* temp =currNode;
        currNode=prevNode;
        if(prevNode && nextNode && prevNode->val==nextNode->val){
            prevNode->next=nextNode;
            nextNode->prev=prevNode;
            free(temp);
        }
        /*input
          doublylinkedlist dll;
   
    dll.insertionAtend(2);
    dll.insertionAtend(1);
    dll.insertionAtend(1);
    dll.insertionAtend(2);
    dll.insertionAtend(1);
    dll.display();
    delete_same_neighbour_node(dll.head,dll.tail);
    dll.display();*/
    }
}
//critical point in linkedlist is defined as either a local maxima or local minima where
//minDistance is the minimum distance between two points maxdistants is max distant between any two points 
bool isCriticalPoint(node* &currNode){
    if(currNode->prev->val < currNode->val && currNode->next->val< currNode->val){
        return true;

    }
    if(currNode->prev->val > currNode->val && currNode->next->val > currNode->val){
        return true;
    }
    return false;
}

vector <int> distanceBetweenCriticalPoints(node* head,node* tail){
    vector<int> ans (2,INT32_MAX);
        int firstCP=-1,lastCP=-1;
        node* currNode=tail->prev;
        if(currNode==NULL){
            ans[0]=ans[1]=-1;
            return ans;
        }
    
    int currPos=0;
    while(currNode->prev!=NULL){
        if(isCriticalPoint(currNode)){
            if(firstCP==-1){
                firstCP=lastCP=currPos;
            }else{
                ans[0]=min(ans[0],currPos-lastCP);
                ans[1]=currPos-firstCP;
                lastCP=currPos;
            }
        }
        currPos++;
        currNode=currNode->prev;

    }
    if(ans[0]==INT32_MAX){
        ans[0]=ans[1]=-1 ;
    }
    return ans;


}

int main(){
    
    doublylinkedlist dll;
    dll.insertionAtend(1);
    dll.insertionAtend(5);
    dll.insertionAtend(4);
    dll.insertionAtend(2);
    dll.insertionAtend(6);
    dll.insertionAtend(3);
    dll.display();
    vector <int> ans=distanceBetweenCriticalPoints(dll.head,dll.tail);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}//traversal in doubly linked list
