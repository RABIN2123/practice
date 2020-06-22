/**
*@file  ex.cpp
*@author Литвинов.О.А., гр. 515К
*@date 13 июня 2020
*@brief Практическая работа
*
*/
#include "Header.h"
int main() {
	setlocale(LC_ALL, "ru");
	char* str;
	str = (char*)malloc(N + 1);
	*str = 0;
	printf("Введите предложение:");
	fgets(str, N, stdin);
	anograma(str);
	return 0;
}