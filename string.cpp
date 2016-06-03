#include<string>
#include<algorithm>
#include<iostream>
#include<stack>
#include<limits.h>
using namespace std;
class MinStack {
public:
    stack<int>s1;
    stack<int>s2;
    int min_val;
    MinStack() {
        // do initialization if necessary
        min_val = INT_MAX;
    }

    void push(int number) {
        // write your code here
        s1.push(number);
        if(number < min_val) {
            min_val = number;
        }
        s2.push(min_val);
    }

    int pop() {
        // write your code here
        int top = s1.top();
        s2.pop();
        s1.pop();
	    if(s1.empty()) min_val = INT_MAX;
        return top;
    }

    int min() {
        // write your code here
        return s2.top(); 
    }
};


//int main(){
//    return 0;
//}
