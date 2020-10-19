#ifndef _ANGLES_H
#define _ANGLES_H
#include <string>
#include <math.h>
#define pi 3.141593
using namespace std;
class Angles
{
private:
    float angle1, angle2;
public:
    void set_angle1(float value1)
    {
        angle1 = value1;
    }
    void set_angle2(float value1)
    {
        angle2 = value1;
    }
    float get_angle1(float value1)
    {
        return angle1;
    }
    float get_angle2(float value1)
    {
       return angle2;
    }

    void convert()
    {
        cout << "Radians 1: " << angle1 * pi / 180;
        cout << "\nRadians 2: " << angle2 * pi / 180;
    }

    void addition()//y = std::modf(d, &x); // целая часть запишется в x, дробная - в y
    {
        float intPart, nonIntPart;
        nonIntPart = modf(angle1 + angle2, &intPart);
        cout << "Angle 1 + Angle 2 = " << intPart <<" degrees "<< nonIntPart << " minutes.";
    }

    void subtraction()
    {
        float intPart, nonIntPart;
        nonIntPart = modf(angle1 - angle2, &intPart);
        cout << "Angle 1 - Angle 2 = " << intPart << " degrees " << nonIntPart << " minutes.";
        nonIntPart = modf(angle2 - angle1, &intPart);
        cout << "\nAngle 2 - Angle 1 = " << intPart << " degrees " << nonIntPart << " minutes.";
    }

    void division()
    {
        cout << "Angle 1 / Angle 2 = " << (angle1 / angle2);
        cout << "\nAngle 2 / Angle 1 = " << (angle2 / angle1);
    }

    void trig_functions()
    {
        if (angle1 == 0 || angle1 == 90 || angle1 == 180 || angle1 == 270 || angle1 == 360)
        {
            switch (int intAngle=int(angle1))
            {
            case 0:
                cout << "sin(Angle 1) = 0";
                cout << "\ncos(Angle 1) = 1";
                cout << "\ntan(Angle 1) = 0";
                cout << "\nctan(Angle 1)= -";
                break;
            case 90:
                cout << "sin(Angle 1) = 1";
                cout << "\ncos(Angle 1) = 0";
                cout << "\ntan(Angle 1) = -";
                cout << "\nctan(Angle 1)= 0";
                break;
            case 180:
                cout << "sin(Angle 1) = 0";
                cout << "\ncos(Angle 1) = -1";
                cout << "\ntan(Angle 1) = 0";
                cout << "\nctan(Angle 1)= -";
                break;
            case 270:
                cout << "sin(Angle 1) = -1";
                cout << "\ncos(Angle 1) = 0";
                cout << "\ntan(Angle 1) = -";
                cout << "\nctan(Angle 1)= 0";
                break;
            case 360:
                cout << "sin(Angle 1) = 0";
                cout << "\ncos(Angle 1) = 1";
                cout << "\ntan(Angle 1) = 0";
                cout << "\nctan(Angle 1)= -";
                break;
            }
        }
        else
        {
            cout << "sin(Angle 1) = " << sin(angle1 * pi / 180);
            cout << "\ncos(Angle 1) = " << cos(angle1 * pi / 180);
            cout << "\ntan(Angle 1) = " << tan(angle1 * pi / 180);
            cout << "\nctan(Angle 1)= " << 1 / tan(angle1 * pi / 180);
        }
        if (angle2 == 0 || angle2 == 90 || angle2 == 180 || angle2 == 270 || angle2 == 360)
        {
            switch (int intAngle = int(angle2))
            {
            case 0:
                cout << "sin(Angle 2) = 0";
                cout << "\ncos(Angle 2) = 1";
                cout << "\ntan(Angle 2) = 0";
                cout << "\nctan(Angle 2)= -";
                break;
            case 90:
                cout << "sin(Angle 2) = 1";
                cout << "\ncos(Angle 2) = 0";
                cout << "\ntan(Angle 2) = -";
                cout << "\nctan(Angle 2)= 0";
                break;
            case 180:
                cout << "sin(Angle 2) = 0";
                cout << "\ncos(Angle 2) = -1";
                cout << "\ntan(Angle 2) = 0";
                cout << "\nctan(Angle 2)= -";
                break;
            case 270:
                cout << "sin(Angle 2) = -1";
                cout << "\ncos(Angle 2) = 0";
                cout << "\ntan(Angle 2) = -";
                cout << "\nctan(Angle 2)= 0";
                break;
            case 360:
                cout << "sin(Angle 2) = 0";
                cout << "\ncos(Angle 2) = 1";
                cout << "\ntan(Angle 2) = 0";
                cout << "\nctan(Angle 2)= -";
                break;
            }
        }
        else
        {
            cout << "sin(Angle 2) = " << sin(angle1 * pi / 180);
            cout << "\ncos(Angle 2) = " << cos(angle1 * pi / 180);
            cout << "\ntan(Angle 2) = " << tan(angle1 * pi / 180);
            cout << "\nctan(Angle 2)= " << 1 / tan(angle1 * pi / 180);
        }
    }

    void comparison()
    {
        if (angle1 - angle2 > 0)
        {
            cout << "The first Angle is greater than the second.\n";
        }
        if (angle1 - angle2 < 0)
        {
            cout << "The first Angle is less than the second.\n";
        }
        if (angle1 - angle2 == 0)
            cout << "Angles are equal";
    }
    ~Angles() {}
};
#endif _ANGLES_H