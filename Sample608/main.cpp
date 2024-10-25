#include<map>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	map<string, int> score{};
	score["Tom"] = 100;
	score["Bob"] = 80;
	score["Mike"] = 76;
	score.erase("Mike");//キー削除
	score.insert(make_pair("John", 88));
	score.emplace("David", 70);
	auto itr = score.find("John");

	cout << itr->first << "の点数は" << itr->second<<"点"<<endl;
	cout << "Tomの点数: " << score["Tom"] << endl;
	cout << "Bobの点数: " << score["Bob"] << endl;
	if (score.count("Mike"))
	{					//指定キーの要素数の有無のチェック
		cout << "Mikeの点数: " << score["Mike"] << endl;
	}
	/*for (auto it = score.begin(); it != score.end(); it++)
	{
		cout << "Key: " << it->first<<" "<< "Value: " << it->second << endl;
	}*/


	/*for (auto p : score)
	{
		cout << "Key: " << p->first << " " << "Value: " << p->second << endl;
	}*/

	for (const auto & [key,value]:score)
	{
		cout << "Key: " << key << " " << "Value: " << value<< endl;
	}
	return 0;
}

