#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int cal(int v1,int v2,char op){
    if(op=='^'){
        return pow(v1,v2);
    }
    if(op=='*'){
        return (v1*v2);
    }
    if(op=='/'){
        return (v1/v2);
    }
    if(op=='+'){
        return (v1+v2);
    }
    return v1-v2;
}
int eval (string &str){
    stack<int>st;
    for(size_t i=0;i<str.size();i++){
        char ch=str[i];
        if(isdigit(ch)){
            st.push(ch-'0');
        }else{
            int v2=st.top();st.pop();
            int v1 = st.top();st.pop();
            int result =(cal(v1,v2,ch));
            st.push(result);

        }

    }
    return st.top();
}
int main(){
    string str = "231*+9-";
    cout<<eval(str);
    return 0;
}
