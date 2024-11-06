#include<map>
#include<vector>
#include<iostream>
using namespace std;

typedef struct
{
	string name;
	int hp, atk, def;
}Enemy;
int main()
{
	vector<Enemy> vEne{ {"Slime",10,5,8},
		{"Wolf",20,30,1},{"Spoder",30,15,5} };
	//vEne[0]��Slime�Ɋւ���f�[�^(�\���̕ϐ�)
	//vEne[1]��Wolf�Ɋւ���f�[�^(�\���̕ϐ�)
	//vEne[2]��Spider�Ɋւ���f�[�^(�\���̕ϐ�)
	map<string, Enemy> mapEne{};
	//ve[0].name: Slime
	
	for (int i = 0; i < vEne.size(); i++)
	{
	mapEne.emplace(vEne[i].name, vEne[i]);
	}
	string input;//�L�[�{�[�h���͒l���󂯎��ϐ�
	cout << "Enemy��>";
	cin >> input;
	if (mapEne.count(input))
	{
		//�L�[�̗L�����`�F�b�N
		cout << "Name: " << mapEne[input].name << endl;
		cout << "Hp  : " << mapEne[input].hp << endl;
		cout << "Atk : " << mapEne[input].atk << endl;
		cout << "Def : " << mapEne[input].def << endl;
		auto it = mapEne.find(input);
		cout << "Name: " << it->second.name << endl;
		cout << "Hp  : " << it->second.hp << endl;
		cout << "Atk : " << it->second.atk << endl;
		cout << "Def : " << it->second.def << endl;

	}
	return 0;
}