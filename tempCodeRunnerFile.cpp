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