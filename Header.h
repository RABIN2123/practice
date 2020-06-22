/**
*@file  Header.cpp
*@author Литвинов.О.А., гр. 515К
*@date 13 июня 2020
*@brief Практическая работа
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
const char symbol[] = { '.',',',':',';','?','!',' ','"','\x27' };//Знаки препинания и пробел
/**
*Перемешивание букв и цифр в пределах одного слова
*
*param str[]  строка
*/
void anograma(char str[]);
#endif