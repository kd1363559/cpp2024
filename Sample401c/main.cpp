
#include"car.h"	
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	//�C���X�^���X�̐���
	Car kuruma;
	//�X�s�[�h�ݒ�
	kuruma.setSpeed(40);
	//���s����
	kuruma.drive(1.5);

	kuruma.drive(2.0);

	cout << "���ړ�����:" << kuruma.getMigration() << "km" << endl;

	return 0;
}