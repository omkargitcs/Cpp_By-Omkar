//overflow : the capacity of it is n if the more of than capacity is pushed it is overflow and it will not be added
//underflow : the pop more than the n means stack is empty and you use pop (delete) then it is the condition of underflow
/*A stack is a linear data structure that follows the LIFO (Last In, First Out) principle, meaning the last element added is the first to be removed.
Basic Terminologies:
- Push: Adding an element to the top of the stack.
- Pop: Removing the top element from the stack.
- Peek/Top: Viewing the top element without removing it.
- Underflow: Trying to pop from an empty stack.
- Overflow: Attempting to push onto a full stack (in a fixed-size stack).
- isEmpty → Checks if the stack is empty.
- isFull → Checks if the stack is full (for fixed-size stacks)

Rules:
- Elements can only be accessed from the top (restricted access).
- The stack maintains order by allowing insertions and deletions only at one end.
- It is widely used in recursion, backtracking, and undo/redo functionalities.
*/
#include<iostream>
#include<climits>
using namespace std;

class stack{
    int capacity;
    int* arr;
    int top;
    public:
    stack(int c){
        this->capacity = c;
        arr = new int(c);
        this->top = -1;
     }
    void push(int data){
        if(this->top==this->capacity-1){
            cout<<"overflow";
            return ;

        }
        this->top++;
        this->arr[this->top]=data;
    }
     int pop(){
        if(this->top = -1){
            cout<<"underflow\n";
            return INT_MIN;
        }
        this->top--;
    }
    int gettop(){
        if(this->top == -1){
            cout<<"underflow\n";
            return INT_MIN;
        }
        return this->arr[this->top];
    }

    bool isEmpty(){
        return this->top==-1;
    }
    int size(){
        return this->top + 1;

    }
    int isFull(){
    return this->top==this->capacity -1;
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
    st.push(8);
    st.pop();
    st.pop();
    cout<<st.gettop()<<"\n";
    return 0;
}