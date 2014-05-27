#include <iostream.h>
#include "MGraph.h"
#include "MGraph_fun.h"
int  dfsColor(MGraph<char> m, int n ,int color[]){
		int v=n;
		int flag=0;
	if(v>=7){
		return;
	}else{
		for(int i=1;i<=4;i++){
			color[v]=i;
			for(int j=0;j<7;j++){
				if(m.arc[v][j]==1){//找出这个顶点所有连接点
					if(color[j]==color[v]){	//如果有链接点颜色发生冲突
						flag=1;
						break;//跳出循环到下一个颜色选择
					}
				}
			}
			if(flag==0){//标志没有改变 没有发生过冲突
				dfsColor(m,v+1,color);//进入下一个版块染色
				return;
			} 
			flag=0;
		}
	}
}


void main(){
	//cout<<"hello world"<<endl;
	char a[10]={'A','B','C','D','E','F','G'};
	MGraph<char> m(a,7,10);
	//下面是定义七巧板个边连接关系
	m.arc[0][1]=m.arc[1][0]=1;
	m.arc[0][4]=m.arc[4][0]=1;
	m.arc[0][5]=m.arc[5][0]=1;
	m.arc[1][2]=m.arc[2][1]=1;
	m.arc[1][3]=m.arc[3][1]=1;
	m.arc[2][3]=m.arc[3][2]=1;
	m.arc[3][4]=m.arc[4][3]=1;
	m.arc[4][5]=m.arc[5][4]=1;
	m.arc[6][3]=m.arc[3][6]=1;
	m.arc[6][4]=m.arc[4][6]=1;

	int color[7];//初始化颜色数组
	for(int i=0;i<7;i++){
	color[i]=0;
	}
	dfsColor(m,0,color);
for(i=0;i<7;i++){
	cout<<color[i];
	}
	cout<<endl;
}
