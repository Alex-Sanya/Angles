#ifndef _UTL_H
#define _UTL_H
#define _CRT_SECURE_NO_WARNINGS

// ���� ������ �����
int input_int(int* x);

// ���� �����
float input_angles(int *degrees, int *minutes);

// ������� �������
void print_comands();

// �������
int comands(char comand, Angles pairOfAngles);

// ������� ������������
void demonstration(Angles pairOfAngles);

#endif _UTL_H