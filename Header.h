/**
*@file  Header.cpp
*@author ��������.�.�., ��. 515�
*@date 13 ���� 2020
*@brief ������������ ������
*
*/

#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
#include <string.h>
#include <time.h>
#define N 256
const char symbol[] = { '.',',',':',';','?','!',' ','"','\x27' };//����� ���������� � ������
/**
*������������� ���� � ���� � �������� ������ �����
*
*param str[]  ������
*/
void anograma(char str[]);
#endif