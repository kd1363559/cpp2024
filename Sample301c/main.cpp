#include<iostream>
#include"car.h"

using namespace std;

int main(int argc, char** argv)
{
	//�C���X�^���X�̐���
	Car kuruma;
	//�X�s�[�h�ݒ�
	kuruma.setSpeed(40);
	//���s����
	kuruma.drive(1.5);

	return 0;
}