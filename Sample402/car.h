#pragma once

class Car {
public:
	Car();		//�R���X�g���N�^
	~Car();		//�f�X�g���N�^
	double getMigration();


	void setSpeed(double speed);
	//���s����
	void drive(double hour);
private:
	double m_migration;
	//�X�s�[�h
	double m_speed;
};