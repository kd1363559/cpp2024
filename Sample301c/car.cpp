#include "car.h"
#include <iostream>

using namespace std;

void Car::setSpeed(double speed)
{
	m_speed = speed;
}

//���s����
void Car::drive(double hour)
{
	cout << "����" << m_speed << "Km��" << hour << "���ԑ��s" << endl;
	cout << m_speed * hour << "Km�ړ����܂����B" << endl;
}