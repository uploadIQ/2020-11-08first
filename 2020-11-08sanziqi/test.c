//������


#include"game.h"
#pragma warning (disable:4996)
void menu(){
	printf("************************************************\n");
	printf("***********   1��play      2��exit  ************\n");
	printf("************************************************\n");
}
void game(){
	char ret = 0;
	char board[ROW][COL] = { 0 };//����߳���������Ϣȫ��Ϊ�ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);

	while (1){
		Playermove(board, ROW, COL);//�����
		DisplayBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
		Computermove(board, ROW, COL);//������
		DisplayBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')//C������Ϸ
		{
			break;
		}
	}
	if (ret == '*'){
		printf("���Ӯ����Ϸ������\n");
	}
	else if (ret == '#'){
		printf("����Ӯ,��Ϸ������\n");
	}
	else{
		printf("ƽ��\n");
	}
	printf("����Ҫ����һ����\n"); 
}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
		case 1:
			game();
			break;
		case 2:		
			printf("�˳���Ϸ\n");
			input = 1;
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (!input);

}

 int main(){
	test();
	system("pause");
	return 0;
}
 //����ѭ��