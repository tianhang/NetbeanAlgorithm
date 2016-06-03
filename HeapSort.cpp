#include<vector>
#include<stdlib.h>
using namespace std;

class Solution{
public:
    void heapify(vector<int> &v,int i,int len){
	int l = 2*i + 1;
	int r = 2*i + 2;
	int max = i;
	if(l < len && v[l] > v[max]){
		max = l;	
	}
	if(r < len && v[r] > v[max]){
		max = r;	
	}
	if(i != max){
		swap(v[i],v[max]);	
		heapify(v,max,len);
	}
    }
    void heapSort(vector<int> &v){
   	int len = v.size();
	for(int i = len/2;i>=0;i--){
		heapify(v,i,len);	
	}
	for(int j = len -1;j>=0;j--){
		swap(v[j],v[0]);	
		heapify(v,0,j);	
	}
    }
};