#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void meun(){
		printf("************\n");
		printf("***1.play***\n");
		printf("***0.exit***\n");
		printf("************\n");
}

void game(){
	int mun=rand()%100+1;
	int guess=0;
	while(1){
		printf("请输入猜数：");
		scanf("%d",&guess); 
		if(guess>mun){
			printf("猜测大了\n");
		
		}
		else if(guess<mun){
			printf("猜测小了\n");
		} 
		else if(guess==mun){
			printf("猜对了！！！\n"); 
			break;
		}
	}
}

int main(){
	int input=0;
	srand((unsigned int)time(NULL));
	do{
		meun();
		printf("请选择：");
		scanf("%d",&input);
		switch(input){
			case 1:
				printf("开始游戏\n");
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
				break;
		}
	
	}while(input);
	return 0;
}
