#include <iostream>
using namespace std;
#include "BTree.h"
#include "BTrees_fun.h"
void main(){
//	cout<<"hello world"<<endl;
	BTree<char> bt;
	bt.preOrder();
	cout<<endl;
	bt.inOrder();
	cout<<endl;
	bt.postOrder();
}
