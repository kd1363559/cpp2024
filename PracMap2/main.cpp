#include<iostream>
#include<map>
#include<random>
using namespace std;
int main()
{
	//�p�P��̘a��Ɖp��̃y�A��dic�Ɋi�[
	map<string, string> dic{ {"����","acticity"},
		{"���͋C","atmosphere"},{"���t","blood"},
		{"��","environment"},{"���x","temperanture"} };
		
	
	//for (auto it = dic.begin(); it != dic.end(); it++)
	//{
	//	cout << it->first << endl;
	//}
	////cout << dic.begin()->first << endl;

	//for (auto p : dic)
	//{
	//	cout << p.first << endl;
	//	
	//}

	//�������������쐬
	random_device rand_dev{};
	//�����A���S���Y���Ƀ����Z���k�c�C�X�^�[���w��
	mt19937 rand_engine(rand_dev());
	//0�`(map�̗v�f��)-1���ϓ��Ȋm���œ��镪�z���������쐬
	uniform_int_distribution<int>
		dist(0,dic.size() - 1);

	auto it = dic.begin();
	it = next(it, dist(rand_engine));
	cout << it->first << "�̉p��́H" << endl;
	string input;//���͕���
	cin >> input;
	if (input==it->second)
	{
		cout << "����!" << endl;
	}
	else
	{
		cout << "�s����..." << endl;
	}
	
	return 0;

}