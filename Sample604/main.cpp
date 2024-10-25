#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1;//整数型の動的配列v1
	vector<string> v2;//文字列型の動的配列

	v1.push_back(1);//v1の末尾に1を追加（要素数＝１）
	v1.push_back(2);//v1の末尾に2を追加（要素数＝２）
	v1.push_back(3);//v1の末尾に3を追加（要素数＝３）
	v2.push_back("ABC");
	v2.push_back("DEF");
	v1.pop_back();//末尾要素の削除
	v1.emplace_back(4);
	cout << "v1の要素数" << v1.size() << endl;

	//vector<int>::iterator itrV1 = v1.begin();
	auto itrV1 = v1.begin();
	cout << "イテレータが指す要素の値:" << *itrV1 << endl;
	v1.insert(itrV1 + 1, 11);
	
	// itrV1 = v1.begin();//イテレータの変更に対応する必要がある
	//v1.erase(itrV1 + 3);

	v1.erase(v1.begin() + 3);



	//for (int i = 0; i < v1.size(); i++)
	//{
	//	cout << "v1[" << i << "]" << v1[i] << endl;
	//}

	//for (auto itr = v1.begin(); itr != v1.end(); ++itr)
	//{
	//	cout << *itr << endl;
	//}

	for (auto itr: v1)
	{
		cout << itr << endl;
	}



	v2.pop_back();//末尾要素の削除
	v2.emplace_back("G");
	cout << "v2の要素数" << v2.size() << endl;
	for (int i = 0; i < v2.size(); i++)
	{
		cout << "v2[" << i << "]" << v2[i] << endl;

	}
	return 0;
}