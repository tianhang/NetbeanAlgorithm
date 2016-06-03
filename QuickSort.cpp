#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void quickSort(vector<int>&v,int i,int j){
    //partition
    int left = i,right = j;
    int mid = v[(left + right)/2];
//    cout<<"mid:"<<v[mid]<<endl;
    while(left <= right){
	while(v[left] < mid) left++;
	while(v[right] > mid) right--;
	
	if(left <= right){
//	    cout<<"curr mid:"<<mid<<endl;
//		cout<<"change->"<<"left:"<<v[left]<<"--"<<"right:"<<v[right]<<endl;
		int tem = v[left];	
		v[left] = v[right];
		v[right] = tem;
		left++;
		right--;	
	}
    }
    //recursion stop condition
    //recursion,the if condition is necessary otherwise there will be dead loop recursively
    
    cout<<"left pos:"<<left<<"--"<<"right pos:"<<right<<"diff:"<<abs(left-right)<<endl;
//    for(int k=0;k<v.size();k++){
//		cout<<v[k]<<",";		
//	}
    cout<<endl;
    if(i < right)
   	quickSort(v,i,right); 
    if(left < j)
   	quickSort(v,left,j); 
}
int nthUglyNumber(int n) {
        // write your code here
        int *ugly = new int[n];
        ugly[0] = 1;
        int *T2 = ugly,*T3 = ugly,*T5 = ugly;
        for(int next =1;next < n;next++){
            ugly[next] = min(min(*T2*2,*T3*3),*T5*5);
	    
	        cout<<ugly[next]<<endl;
            while(*T2*2 <= ugly[next]) 
		T2++;
            while(*T3*3 <= ugly[next]) 
		T3++ ;
            while(*T5*5 <= ugly[next]) 
		T5++;
        }
        return ugly[n-1];
    }
 int nthUglyNumber2(int n) {
        int *uglys = new int[n];
        uglys[0] = 1;
        int next = 1;
        int *p2 = uglys;
        int *p3 = uglys;
        int *p5 = uglys;
//	cout<<*p2<<endl;
        while (next < n){
	   cout<<"-----"<<endl; 
            int m = min(min(*p2 * 2, *p3 * 3), *p5 * 5);
	    cout<<*p2<<","<<*p3<<","<<*p5<<endl;
            uglys[next] = m;
	    cout<<uglys[next]<<endl;
            while (*p2 * 2 <= uglys[next])
                (p2++);
            while (*p3 * 3 <= uglys[next])
                p3++;
            while (*p5 * 5 <= uglys[next])
                p5++;
	    cout<<*p2<<","<<*p3<<","<<*p5<<endl;
	     cout<<"-----"<<endl; 
//	    cout<<*uglys<<endl;
            next++;
        }
        int uglyNum = uglys[n - 1];
        delete[] uglys;
        return uglyNum;
    }
 int nthUglyNumber3(int n) {
        // write your code here
        int *ugly = new int[n];
        ugly[0] = 1;
        int *T2 = ugly,*T3 = ugly,*T5 = ugly;
        for(int next =1;next < n;next++){
            ugly[next] = min(min(*T2 *2,*T3 *3),*T5 *5);
	    
	        cout<<ugly[next]<<endl;
            while(*T2 *2 <= ugly[next]) 
		        T2++; 
            while(*T3 *3 <= ugly[next]) 
		        T3++ ;
            while(*T5 *5 <= ugly[next]) 
		        T5++;
        }
        int res = ugly[n-1];
        delete []ugly;
        return res;
    }
//int main(){
//    	nthUglyNumber3(41);
//	cout<<"-----------"<<endl;
//	return 0;
//}