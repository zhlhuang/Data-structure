#include <iostream>
using namespace std;
#include "LinkList.h"
#include "LinkList_fun.h"
void main(){
	LinkList<char> cl;
	char a[]="zxcvbnmlkj";
	for(int i=1;i<=10;i++){
		cl.Insert(i,a[i-1]);
	};
	cl.turn();
	cl.PrintList();
	cl.Jose();
	//askfjsdlkajflaksdj
}
;