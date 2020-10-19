#include <iostream>
#include "Angles.h"
#include "utl.h"

using namespace std;
int main()
{
	int degrees1, minutes1, degrees2, minutes2;
	degrees1 = minutes1 = degrees2 = minutes2 = 0;
	Angles pairOfAngles;
	cout << "Enter the degrees and minutes of the first angle, then the second angle.\n";
	pairOfAngles.set_angle1(input_angles(&degrees1, &minutes1));
	pairOfAngles.set_angle2(input_angles(&degrees2, &minutes2));
	demonstration(pairOfAngles);
	printf("\n\n");
	system("pause");
	return 0;
}