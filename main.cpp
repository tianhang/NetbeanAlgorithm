#include<iostream>
#include<stdlib.h>
#include"HeapSort.cpp"
#include"static.cpp"
#include<stack>

using namespace std;

struct demo{
    char a[2];
    char f[2];
    char d[2];
    int b;
    char c[0];
};
//int main(){
//     
//    return 0;
//}
int main2(){
    vector<int>v;
    for(int i=0;i<100;i++){
   	v.push_back(rand()%100);
    }
    Solution s;
    s.heapSort(v);
    for(int i=0;i<v.size();i++){
   	cout<<v[i]<<"," ;
    }
    
    return 0;
}

int longestValidParentheses(string s) {
        int len = s.length(),l=0,max_len=0;
        stack<char>stk;
        for(int i=0;i<len;i++){
            if(s[i] == '('){
		cout<<"push"<<endl;
                stk.push('(');
            }
            else if(s[i] == ')'){
		cout<<"pop"<<endl;
                if(!stk.empty()){
                    stk.pop();
                    l += 2;
                }else{
                    max_len= max(max_len,l);
		    cout<<max_len<<endl;
                    l=0;
                }
            }
        }
        return max_len;
    }
int main(){
	cout<< longestValidParentheses("))))((()))(((")<<endl;
	return 0;
}