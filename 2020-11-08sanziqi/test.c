//三子棋


#include"game.h"
#pragma warning (disable:4996)
void menu(){
	printf("************************************************\n");
	printf("***********   1、play      2、exit  ************\n");
	printf("************************************************\n");
}
void game(){
	char ret = 0;
	char board[ROW][COL] = { 0 };//存放走出的棋盘信息全部为空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);

	while (1){
		Playermove(board, ROW, COL);//玩家走
		DisplayBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
		Computermove(board, ROW, COL);//电脑走
		DisplayBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')//C继续游戏
		{
			break;
		}
	}
	if (ret == '*'){
		printf("玩家赢，游戏结束！\n");
	}
	else if (ret == '#'){
		printf("电脑赢,游戏结束！\n");
	}
	else{
		printf("平局\n");
	}
	printf("还需要再来一把吗？\n"); 
}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
		case 1:
			game();
			break;
		case 2:		
			printf("退出游戏\n");
			input = 1;
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (!input);

}

 int main(){
	test();
	system("pause");
	return 0;
}
 //跳出循环