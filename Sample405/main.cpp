#include"rat.h"

int main()
{
	Rat* r1, * r2, * r3;
	r1 = new Rat();			//1�C�ڂ̃l�Y�~�C���X�^���X�𐶐�
	r1->squeak();			//�l�Y�~�P���Ȃ�
	Rat::showNum();			//�l�Y�~�̑�����\���i���I�����o�֐��̎��s�j

	r2 = new Rat();			//�l�Y�~�Q�̃C���X�^���X�𐶐�
	r3 = new Rat();			//�l�Y�~�R�̃C���X�^���X�𐶐�

	r2->squeak();			//�l�Y�~�Q���Ȃ�
	r3->squeak();			//�l�Y�~�R���Ȃ�
	Rat::showNum();			//�l�Y�~�̑�����\��
	delete r1;				//�l�Y�~�P�̃C���X�^���X������
	delete r2;				//�l�Y�~�Q�̃C���X�^���X������
	Rat::showNum();			//�l�Y�~�̑�����\��
	delete r3;				//�l�Y�~�R�̃C���X�^���X������
	Rat::showNum();			//�l�Y�~�̑�����\��

	return 0;
}