#include<vector>
#include<queue>
#include<string>
#include<cstring>
#include<iostream>
using namespace std;

string helper(string s,string aim){
    int index = 0;
    char array[s.length()];
    strcpy(array,s.c_str());
    vector<queue<char> >buckets(10);
    queue<char>tmp;
    //push
    for(int i=0;i<s.length();i++){
 	int bits;	
	if(aim == "digits"){
	    bits = s[i]%10;
	}else if(aim == "tens"){
	    bits = s[i]%100/10; 
	}else{
	    bits = s[i]%1000/100;
	}
	buckets[bits].push(s[i]); 
    }
    //pop
    for(int i=0;i<10;i++){
	tmp = buckets[i];
   	while(!tmp.empty()){
		array[index++] = tmp.front();	
		tmp.pop();
	}		 
    } 
    return string(array);	
}
string radixSort(string s){
    // a-z : 65-90
    // A-Z : 97-122
    // 0->128
    string str = helper(s,"digits"); 
    cout<<str<<endl;
    str = helper(str,"tens"); 
    cout<<str<<endl;
    str = helper(str,"hundreds"); 
    cout<<str<<endl;
    return str;
}
//
//int main(){
//    string s = "dsfsd354ruewhruiehrweuruer3458595489548349343dslks,,.d.froruiteitrietirehtierhthrutgurhfuer32nfsdfsdjgho495-045i43536345";
//    cout<<radixSort(s); 
//    return 0;
//}