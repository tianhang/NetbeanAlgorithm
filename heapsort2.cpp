#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

void heapify(vector<int> &v,int i,int last){
    cout<<"heapify:"<<i<<endl;
	int min = i;
	int lchild = 2*i+1,rchild = 2*i +2;
	if(lchild <= last && v[lchild] < v[i]){
		min = lchild;
	}	
	if(rchild <= last && v[rchild] < v[i]){
		min = rchild;
	}
	if(min != i){
	    	swap(v[i],v[min]);	
		heapify(v,min,last);	
	}
}
void heapSort(vector<int> &v){
    int len = v.size();
    for(int i = len/2;i>=0;i--){
   	heapify(v,i,len-1);	 
    }
    for(int j = len-1;j>=0;j--){
   	swap(v[0],v[j]);
	heapify(v,0,j-1);	
    }
}
//int main2(){
//    vector<int>v;
//    for(int i=0;i<100;i++){
//   	v.push_back(rand()%100);
//    }
//    heapSort(v);
//    for(int i=0;i<v.size();i++){
//   	cout<<v[i]<<"," ;
//    }
//    return 0;
//}
