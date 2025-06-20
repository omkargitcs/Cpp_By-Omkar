//2linked list tell if they are equal or not same data and arrangement of data 
//nodes same and length should be same 
#include<iostream>
#include<vector>
using namespace std;

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
        }
        cout<<"NULL"<<endl;

    }
};

bool checkEquallinkedlist(node* head1,node* head2){
    node* ptr1=head1;
    node* ptr2 = head2;

    while(ptr1!=NULL &&  ptr2!=NULL){
        if(ptr1->val!=ptr2->val){
            return false;
        }
        ptr1 = ptr1->next;
        ptr2=ptr2->next;
    }
    //at this point either is null or ptr2 is not null or both are null
    return (ptr1==NULL && ptr2==NULL);
}

//given heads of two singly linked list heada and headb return the node at which the two lists intersect if not intersect return null
int length(node* head){
    node* temp = head;
    int length =0;
    while(temp!=NULL){
        length++;
        temp=temp->next;

    }
    return length;
}

node* moveHeadByK(node* head,int k){
    node* ptr = head;
    while(k--){
        ptr=ptr->next;
    }
    return ptr;
}



node* getIntersection(node* head1,node* head2){
    int l1=length(head1);
    int l2 = length(head2);

    //step2 find difference k between linkedlist ad move longer linkedlist
    node* ptr1;
    node* ptr2;
    if(l1>l2){
        int k = l1-l2;
        ptr1=moveHeadByK(head1,k);
        ptr2=head2;
        
    }else{//ll2 is longer
        int k=l2-l1;
        ptr1=head1;
        ptr2=moveHeadByK(head2,k);
    
    }
    while(ptr1 && ptr2){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return NULL;
    //input 
    /*    linkedlist ll1;
    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);
    ll1.insert(4);
    ll1.insert(5);

    linkedlist ll2;
    ll2.insert(6);
    ll2.insert(7);
    ll2.head->next->next=ll1.head->next->next->next;

    node* intersection = getIntersection(ll1.head,ll2.head);
    if(intersection){
        cout<<intersection->val<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
  


    return 0;*/
}
//assuming the kth node is less than length or less then linked list
void removedKthNodeFromEnd(node* &head,int k){
    node* ptr1=head;
    node* ptr2=head;
    //move ptr2 by k steps ahead
    int count = k;
    while(count--){
        ptr2=ptr2->next;
    }
    if(ptr2==NULL){//k is = length of linklist
        //we have to delete the headnode 
        node* temp = head;
        head = head->next;
        free(temp);
        return;
    }
    //now ptr2 is k steps ahead of ptr1
    //when ptr2 is at null (end of list),ptr1 will be at node to be deleted 
    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    //now ptr1 is pointing to the node before kth node from end 
    node* temp = ptr1->next;
    ptr1->next=ptr1->next->next;
    free(temp);
    //input
    /*linkedlist ll1;
    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);
    ll1.insert(4);
    ll1.insert(5);
    ll1.insert(6);
    ll1.display();
    removedKthNodeFromEnd(ll1.head,3);
    ll1.display();*/
}

node* mergelinkedlist(node* &head1,node* &head2){
    node* dummyHeadNode = new node(-1);
    node* ptr1 = head1;
    node* ptr2 = head2;
    node* ptr3 = dummyHeadNode;

    while(ptr1 && ptr2){
        if(ptr1->val < ptr2->val){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    if(ptr1!=NULL){
        ptr3->next = ptr1;
    }
    else{
        ptr3->next=ptr2;

    }
    return dummyHeadNode->next; 
    /*input
    linkedlist ll1;
    ll1.insert(1);
    ll1.insert(3);
    ll1.insert(4);
    ll1.insert(6);
    ll1.display();

    linkedlist ll2;
    ll2.insert(2);
    ll2.insert(5);
    ll2.display();

    linkedlist ll3;
    ll3.head = mergelinkedlist(ll1.head,ll2.head);
    
    ll3.display(); */
}
//merging multiple linked list
node* mergeKlinkedlist(vector<node*> &lists){

    if(lists.size()==0){
        return NULL;
    }
    while(lists.size()>1){
        node* mergedHead = mergelinkedlist(lists[0],lists[1]);
        lists.push_back(mergedHead);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
    return lists[0];
    //loop input int main() {
    /*int k;
    cout << "Enter number of linked lists: ";
    cin >> k;

    vector<node*> lists;

    for (int i = 0; i < k; i++) {
        linkedlist ll;
        int n, val;
        cout << "Enter number of elements for list " << i + 1 << ": ";
        cin >> n;
        cout << "Enter elements: ";
        for (int j = 0; j < n; j++) {
            cin >> val;
            ll.insert(val);
        }
        ll.display();
        lists.push_back(ll.head);
        */

        //input
        /*   linkedlist ll1;
    ll1.insert(1);
    ll1.insert(7);
    ll1.insert(8);
    ll1.display();

    linkedlist ll2;
    ll2.insert(2);
    ll2.insert(4);
    ll2.insert(5);
    ll2.display();

    linkedlist ll3;
    ll3.insert(3);
    ll3.insert(6);
    ll3.display();

    vector<node*>lists;
    lists.push_back(ll1.head);
    lists.push_back(ll2.head);
    lists.push_back(ll3.head);

    linkedlist mergedLL;
    mergedLL.head=mergeKlinkedlist(lists);
    mergedLL.display();*/

        
    
}

//find the mid element of the linked list 
node* findMiddleElement(node* &head){
    node* slow = head;
    node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow ->next;
        fast=fast->next->next;
    }
    return slow;
}  /*inputlinkedlist ll1;
ll1.insert(1);
ll1.insert(2);
ll1.insert(3);
ll1.insert(4);
ll1.insert(5);
ll1.insert(6);
ll1.display();
node* middlenode = findMiddleElement(ll1.head);
cout<<middlenode->val<<endl;*/

//given a head in linked list determine if hte linked list has a cycle in it;
bool detectCycle(node* head){
    if(!head){
        return false;
    }
    node* slow=head;
    node* fast = head;
    while(fast && fast->next){
        slow=slow->next;

        fast=fast->next->next;
        if(slow==fast){
            cout<<slow->val<<endl;
            return true;
        }
    }
    return false;
    /*    linkedlist ll1;
    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);
    ll1.insert(4);
    ll1.insert(5);
    ll1.insert(6);
    ll1.insert(7);
    ll1.insert(8);
    ll1.display();
    ll1.head->next->next->next->next->next->next->next->next = ll1.head->next->next;
    cout<<detectCycle(ll1.head)<<endl;
    return 0;*/
}

bool ispalindrome(node* head){
    node* slow=head;
    node* fast = head;
    while(fast && fast->next){
        slow=slow->next;
        fast = fast->next->next;
    }
    //now slow is pointing to middle element
    //2.break the linked list in the middle;

    node* curr= slow->next;
    node* prev = slow;
    slow->next = NULL;

    //3 reverse the second hald og linked list
    while(curr){
        node* nextnode = curr->next;
        curr->next = prev;
        prev=curr;
        curr=nextnode;
    }

    //check if the two linkedlist are equal 
    node* head1=head;
    node* head2 = prev;
    while(head2){
        if(head1->val!=head2->val){
            return false;

        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;
    /*linkedlist ll1;
    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);
    ll1.insert(3);
    ll1.insert(2);
    ll1.insert(1);
    ll1.display();
    cout<<ispalindrome(ll1.head)<<endl;

    return 0;*/
}
//given a linked list rotate every element of it k times from right to left
node* rotateByK(node* &head,int k){
    //1.find length of ll
    int n=0;
    //2.find tall people
    node* tail = head;
    while(tail->next){
        n++;
        tail=tail->next;
    }
    n++;//for including last node
    k=k%n;
    if(k==0){
        return head;
    }
    tail->next=head;
    //3.traverse n-k nodes
    node* temp = head;
    for(int i=1;i<n-k;i++){
        temp = temp->next;
    }
    //temp is pointing to (n-k)th node
    node* newhead = temp->next;
    temp->next=NULL;
    return newhead;
    /*
    linkedlist ll1;
    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);
    ll1.insert(4);
    ll1.insert(5);
    ll1.insert(6);
    ll1.display();
    ll1.head=rotateByK(ll1.head,5);//time com = o(2n-k);
    ll1.display();*/


}
node* reorder_Linkedlist(node* &head){
    node* slow=head;
    node* fast=  head;
    while(fast &&  fast->next){
        slow = slow->next;
        fast = fast ->next ->next;
    }
    //now slow is pointing to the middle elements
    //2.separate the linked list and reverse second half
    node* curr=slow->next;
    slow->next=NULL;
    node* prev = slow;
    while(curr){
        node* nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
    }
    //3.merging 2 half of list
    node* ptr1=head;//linked list of first half
    node* ptr2=prev;//linked list seconf half

    while(ptr1!=ptr2){
        node* temp = ptr1->next;
        ptr1->next = ptr2;
        ptr1=ptr2;
        ptr2=temp;

    }
    return head;
    /*int main(){
    linkedlist ll1;
    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);
    ll1.insert(4);
    ll1.insert(5);
    ll1.insert(6);
    ll1.display();
    ll1.head=reorder_Linkedlist(ll1.head);
    ll1.display();

    return 0;
}*/

}

//swap adjacent nodes;
node* swapAdjacent(node* &head){
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* secondNode=head->next;
    head->next=swapAdjacent(secondNode->next);
    secondNode->next=head;
    return secondNode;
}


int main(){
    linkedlist ll1;
    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);
    ll1.insert(4);
    ll1.insert(5);
    ll1.display();
    ll1.head = swapAdjacent(ll1.head);
    ll1.display();

    return 0;
}
