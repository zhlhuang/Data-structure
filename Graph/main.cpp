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
				if(m.arc[v][j]==1){//�ҳ���������������ӵ�
					if(color[j]==color[v]){	//��������ӵ���ɫ������ͻ
						flag=1;
						break;//����ѭ������һ����ɫѡ��
					}
				}
			}
			if(flag==0){//��־û�иı� û�з�������ͻ
				dfsColor(m,v+1,color);//������һ�����Ⱦɫ
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
	//�����Ƕ������ɰ�������ӹ�ϵ
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

	int color[7];//��ʼ����ɫ����
	for(int i=0;i<7;i++){
	color[i]=0;
	}
	dfsColor(m,0,color);
for(i=0;i<7;i++){
	cout<<color[i];
	}
	cout<<endl;
}
