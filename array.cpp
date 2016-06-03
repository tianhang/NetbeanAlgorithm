/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include<iostream>
#include<string.h>
#include<bitset>
using namespace std;
int replaceBlank(char string[], int length) {
        // Write your code here
        int len = sizeof(string)/sizeof(char);
        cout<<len<<endl;
        char newArray[len];
        int j = 0;
        for(int i=0;i<length;i++){
            if(string[i] != ' '){
                newArray[j++] = string[i];
            }else{
                newArray[j++] = '%';
                newArray[j++] = '2';
                newArray[j++] = '0';
            }
        
        }
        string = newArray;
	cout<<"after :"<<string<<endl;
        cout<<j<<endl;
        return j;
          
}
void changeArray(int a[],int size){
//	for(int i=0;i<size;i++){
//		a[i] = 'z' ;	
//	}	
    int nArray[] = {1,2,3};
    a = nArray;
}
//int main(int argc, char**argv)
//{
//    cout << bitset<32>(5).to_string() << endl;
//    cout << bitset<32>(4).to_string() << endl;
//    cout << bitset<32>(3).to_string() << endl;
//    cout << bitset<32>(2).to_string() << endl;
//    cout << bitset<32>(1).to_string() << endl;
//    cout << bitset<32>(0).to_string() << endl;
//    cout << bitset<32>(-1).to_string() << endl;
//    cout << bitset<32>(-2).to_string() << endl;
//    cout << bitset<32>(-3).to_string() << endl;
//    cout << bitset<32>(-4).to_string() << endl;
//    cout << bitset<32>(-5).to_string() << endl;
//    cout << bitset<32>(-6).to_string() << endl;
//    return 0;
//}
