#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <Angles.h>
#define ESC 27
using namespace std;

// ввод целого числа
int input_int(int* x)
{
	int check;
	while (1)
	{
		check = scanf_s("%d", x);
		if (check < 1)
		{
			while (getchar() != '\n');
			cout << "Enter integer number.";
			continue;
		}
		return *x;
	}
}

float input_angles(int* degrees, int* minutes)
{
	cout << "\nEnter the degrees of the angle: ";
	input_int(degrees);
	cout << "Enter minutes of the angle: ";
	input_int(minutes);
	return (*degrees+(*minutes/60));
}

// вывести команды
void print_comands()
{
	cout << "input command:\n";
	cout << "exit programm------------0\n"; //выход
	cout << "convert to radians-------1\n"; //перевод в радианы
	cout << "addition-----------------2\n"; //сложение
	cout << "subtraction--------------3\n"; //вычитание
	cout << "division-----------------4\n"; //деление
	cout << "trigonometric functions--5\n"; //тригонометрические функции
	cout << "comparison---------------6\n"; //сравнение
}

// команды
int comands(char comand, Angles pairOfAngles)
{
	switch (comand - '0')
	{
	case 0:
		cout << "\nProgram is over.";
		return 0;
	case 1:
		pairOfAngles.convert();
		break;
	case 2:
		pairOfAngles.addition();
		break;
	case 3:
		pairOfAngles.subtraction();
		break;
	case 4:
		pairOfAngles.division();
		break;
	case 5:
		pairOfAngles.trig_functions();
		break;
	case 6:
		pairOfAngles.comparison();
		break;
	default:
		break;
	};
	return 1;
}

// процесс демонстрации
void demonstration(Angles pairOfAngles)
{
	char comand = 0;
	while (comand != ESC)
	{
		system("cls");
		print_comands();
		cout << "\nComand: " << comand<< endl;
		if (!comands(comand, pairOfAngles))
			break;
		cout << "\nInput comand: ";
		while (!_kbhit());
		comand = _getch();
	}
}