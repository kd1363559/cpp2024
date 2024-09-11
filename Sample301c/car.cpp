#include "car.h"
#include <iostream>

using namespace std;

void Car::setSpeed(double speed)
{
	m_speed = speed;
}

//‘–s‚·‚é
void Car::drive(double hour)
{
	cout << "‘¬" << m_speed << "Km‚Å" << hour << "ŠÔ‘–s" << endl;
	cout << m_speed * hour << "KmˆÚ“®‚µ‚Ü‚µ‚½B" << endl;
}