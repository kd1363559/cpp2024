#include "car.h"
#include <iostream>

using namespace std;

//���s����
void Car::drive(double hour)
{
	cout << "����" << speed << "Km��" << hour << "���ԑ��s" << endl;
	cout << speed * hour << "Km�ړ����܂����B" << endl;
}