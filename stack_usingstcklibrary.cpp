#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <int>st;
       
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<"\n";
    st.push(4);
    st.push(5);
    cout<<st.top()<<"\n";
        
    st.pop();
    st.pop();
    cout<<st.top()<<"\n";
    return 0;    
    
}
