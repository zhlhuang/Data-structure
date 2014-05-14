#include <iostream.h>
#include "MGraph.h"
#include "MGraph_fun.h"
void main(){
	//cout<<"hello world"<<endl;
	char a[10]={'z','x','c','v','b','n','m','s','a','f'};
	MGraph<char> m(a,10,5);
	for(int i=0;i<10;i++){
		m.BFST(i);
	}
	cout<<endl;
}
