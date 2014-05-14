#include <iostream.h>
#include "ALGraph.h"
#include "ALGraph_fun.h"
void main(){
	char a[]={'z','x','c','v','b','n','m','a','s','d'};
	ALGraph al(a,5,7);
	al.BFST(0);
}
