#include"car.h"	
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	//�C���X�^���X�̐���
	/*Car* pKuruma=nullptr;
	pKuruma = new Car();*/

	unique_ptr<Car> pKuruma(new Car);
	//�X�s�[�h�ݒ�
	pKuruma->setSpeed(40);
	//���s����
	pKuruma->drive(1.5);
	pKuruma->drive(2.0);
	cout << "���ړ�����:" << pKuruma->getMigration() << "km" << endl;

	//delete pKuruma;
	cout << "�C���X�^���X�̏����I��" << endl;
	return 0;
}