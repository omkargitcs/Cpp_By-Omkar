//if we concatenate the b1+b2 balanced str then overall str is balanced
//if we wrap a balanced str in curly pair if brackets then result is also balanced
#include<iostream>
#include<stack>
using namespace std;

bool isValid(string str){
    stack<char>st;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(ch=='[' or ch=='(' or ch=='{'){
            st.push(ch);
        }
        else{
            //closing brackets
            if(ch==')' and !st.empty() and st.top() == '('){
                st.pop();
            }
            else if(ch==']' and !st.empty() and st.top() == '['){
                st.pop();
            }
            else if(ch=='}' and !st.empty() and st.top() == '{'){
                st.pop();
            }else{
                return false;
            }
        }
    }
    return st.empty();
}
int main(){
    string str ="()()(({}{}[]))";
    cout<<isValid(str)<<"\n";
    return 0;
}