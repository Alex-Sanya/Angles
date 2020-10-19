#ifndef _UTL_H
#define _UTL_H
#define _CRT_SECURE_NO_WARNINGS

// ввод целого числа
int input_int(int* x);

// ввод углов
float input_angles(int *degrees, int *minutes);

// вывести команды
void print_comands();

// команды
int comands(char comand, Angles pairOfAngles);

// процесс демонстрации
void demonstration(Angles pairOfAngles);

#endif _UTL_H