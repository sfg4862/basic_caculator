#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int main(void) {
	int choose,num1,num2;
	char x;
	printf("------------------------\n");
	printf("    Basic Calculator!\n");
	printf("------------------------\n");
	printf("�����Է� (���� ������ ����) :");
	scanf("%d %c %d", &num1, choose, &num2);
	
	system("cls");
	switch (x) {
	case '+':
		printf("��� :", add(num1, num2)); break;
	}

}