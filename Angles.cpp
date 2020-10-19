#include <iostream>
#include <string>
#include <math.h>
#include <Angles.h>
#define pi 3.14

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
        cout << "Radians 1:" << angle1 * pi / 180;
        cout << "\nRadians 2:" << angle2 * pi / 180;
    }

    void addition()//y = std::modf(d, &x); // целая часть запишется в x, дробная - в y
    {
        float intPart, nonIntPart;
        nonIntPart = modf(angle1 + angle2, &intPart);
        cout << "Angle 1 + Angle 2 = " << intPart << " degrees " << nonIntPart << "minutes.";
    }

    void subtraction()
    {
        float intPart, nonIntPart;
        nonIntPart = modf(angle1 - angle2, &intPart);
        cout << "Angle 1 - Angle 2 = " << intPart << " degrees " << nonIntPart << "minutes.";
        nonIntPart = modf(angle2 - angle1, &intPart);
        cout << "Angle 2 - Angle 1 = " << intPart << " degrees " << nonIntPart << "minutes.";
    }

    void division()
    {
        cout << "Angle 1 / Angle 2 = " << (angle1 / angle2);
        cout << "Angle 2 / Angle 1 = " << (angle2 / angle1);
    }

    void trig_functions()
    {
        cout << "sin(Angle 1) = " << sin(angle1);
        cout << "cos(Angle 1) = " << cos(angle1);
        cout << "tan(Angle 1) = " << tan(angle1);
        cout << "ctan(Angle 1)= " << 1 / tan(angle1);
        cout << "sin(Angle 2) = " << sin(angle2);
        cout << "cos(Angle 2) = " << cos(angle2);
        cout << "tan(Angle 2) = " << tan(angle2);
        cout << "ctan(Angle 2)= " << 1 / tan(angle2);
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