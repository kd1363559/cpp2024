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
	//vEne[0]はSlimeに関するデータ(構造体変数)
	//vEne[1]はWolfに関するデータ(構造体変数)
	//vEne[2]はSpiderに関するデータ(構造体変数)
	map<string, Enemy> mapEne{};
	//ve[0].name: Slime
	
	for (int i = 0; i < vEne.size(); i++)
	{
	mapEne.emplace(vEne[i].name, vEne[i]);
	}
	string input;//キーボード入力値を受け取る変数
	cout << "Enemy名>";
	cin >> input;
	if (mapEne.count(input))
	{
		//キーの有無をチェック
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