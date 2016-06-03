#include<assert.h>
#include<iostream>

using namespace std;

void mymemcy(void *dst,const void *src,size_t num){
    	//psrc is readonnly
	//char* const psrc = (char* const)src;

	//char const * psrc = (char const *)src;
	const char * psrc = (const char *)src;
	//char *psrc = (char *)src;	
	// case 1 : there is overlap , and src < dst	
		
	// case 2 : there is overlap , and src > dst	
}
//int main(){
//
//}
