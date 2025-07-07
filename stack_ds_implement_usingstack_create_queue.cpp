@push_efficient - 
@pop_efficient 
#include<iostream>
#include<stack>
using namespace std;
class  queue{
    stack<int>st;
    public:
    queue(){}
        void push(int x){
            this->st.push(x);
        }
        void pop(){
            if(this->st.empty()) return;

            stack<int> tmp;
            while(this->st.size()>1){
                tmp.push(st.top());
                st.pop();
            }//now stack size is 1 and we are at the bottom element

            this->st.pop();
            while(not tmp.empty()){
                this->st.push(tmp.top());
                tmp.pop();
            }
        }

    bool empty(){
        return this->st.empty();
    }
    int front(){
        if (st.empty()) {
            throw runtime_error("Queue is empty");
        }

        stack<int> tmp;
        while (st.size() > 1) {
            tmp.push(st.top());
            st.pop();
        }

        int result = st.top(); // Get the front element
        tmp.push(st.top()); // Push it back to tmp to restore later
        st.pop();

        while (!tmp.empty()) {
            st.push(tmp.top());
            tmp.pop();
        }

        return result;
    }
};




int main(){
    queue qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.pop();
    qu.pop();
    while(not qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
    return 0;
    


}