#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>
#include "add.h"
#include "div.h"
#include "sub.h"
#include "mul.h"



int main() {
	int num1,num2;
	char choose;
	printf("------------------------\n");
	printf("    Basic Calculator!\n");
	printf("------------------------\n");
	printf("�����Է� (���� ������ ����) :");
	scanf("%d %c %d", &num1, &choose, &num2);
	
	system("cls");
	switch (choose) {
	case '+':
		printf("��� : %d", add(num1, num2)); break;
	case '-':
		printf("��� : %d", sub(num1, num2)); break;
	case '*':
		printf("��� : %d", mul(num1, num2)); break;
	case '/':
		printf("��� : %d", divF(num1, num2)); break;
	}

}