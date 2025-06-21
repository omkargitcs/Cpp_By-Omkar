#include <stack>
#include <limits.h>
#define ll long long int

class MinStack {
public:
    std::stack<ll> st;
    ll mn;

    
    MinStack() {
        this->mn = INT_MAX;
    }
    
    void push(int val) {
        if (this->st.empty()) {
            this->mn = val;
            this->st.push(val);
        } else {
            ll diff = val - this->mn;
            this->st.push(diff);
            if (val < this->mn) {
                this->mn = val;
            }
        }
    }
    
    void pop() {
        if (!this->st.empty()) {
            if (this->st.top() >= 0) {
                this->st.pop();
            } else {
                this->mn = this->mn - this->st.top();
                this->st.pop();
            }
        }
    }
    
    int top() {
        if (this->st.empty()) return -1; // Handle empty stack case

        if (this->st.top() < 0) {
            return this->mn;
        } else {
            return this->mn + this->st.top(); // Corrected retrieval of top element
        }
    }
    
    int getMin() {
        return this->mn;
    }
};