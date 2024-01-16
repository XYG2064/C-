#include<stdio.h>

int count=0;

void move(int n,char a,char c){
	printf("第%d步：把第%d个盘子从%c柱移到%c柱\n",++(count),n,a,c);
}

void Hanoi(int n,char a,char b,char c){
	if(n==1){
		move(n,a,c);
	}
	else{
		Hanoi(n-1,a,c,b);
		move(n,a,c);
		Hanoi(n-1,b,a,c);
	}
}

int main(){
	int n=0;
	printf("please:");
	scanf("%d",&n);
	
	Hanoi(n,'A','B','C');
	printf("所需步数：%d\n",count);
	return 0;
}
