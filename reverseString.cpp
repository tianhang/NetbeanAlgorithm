// Example program
#include <iostream>
#include <string>
using namespace std;
 void reverseLetters(string &s,int left,int right){
        int len = right-left+1;
        char tem;
        //reverse all letters
        for(int i=left;i<(left+right)/2;i++){
            tem = s[i];
            s[i] = s[right-i-1];
            s[right-i-1] = tem;
	    cout<<"for"<<endl;
        }
    }
void reverseALLWord(string &s){
        int left = 0,right = 0;
        for(int i=0;i<s.length();i++){
            cout<<s[i]<<endl;
            
            if(s[i] == ' '){
                right = i-1;
                reverseLetters(s,left,right);
                left = i+1;
            }
            if(i == s.length()-1){
                right = i;
                reverseLetters(s,left,right);
            }
            cout<<"left:"<<left<<"right:"<<right<<endl;
        }
    }
   
    string reverseWords(string s) {
        // write your code here
        if(s.length() <= 1) return s;
       reverseLetters(s,0,s.length()-1);
       reverseALLWord(s);
       return s;
    }
//int main()
//{
//    string s = "hello world";
//    cout<<reverseWords(s)<<endl;
//    return 0;
//}

