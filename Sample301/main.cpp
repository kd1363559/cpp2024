#include<iostream>
#include"car.h"

using namespace std;

int main(int argc, char** argv)
{
	//�C���X�^���X�̐���
	Car nbox,tanto;
	//�X�s�[�h�ݒ�
	nbox.speed = 40;
	//���s����
	nbox.drive(1.5);


	//�X�s�[�h�ݒ�
	tanto.speed = 50;
	//���s����
	tanto.drive(1.0);
	return 0;
}