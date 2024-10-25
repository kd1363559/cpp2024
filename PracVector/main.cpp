#include<iostream>
#include<vector>
using namespace std;
void compare(int& Max, int& Min, const int data)
{
	Max = Max < data ? data : Max;
	Min = Min > data ? data : Min;

	/*if (Max < data)
	{
		Max = data;
	}
	if (Min > data)
	{
		Min = data;
	}*/
}

int main()
{
	vector<int> vec{ 20,11,9,33,40,25 };
	int Max;
	int Min;

	Max = *max_element(vec.begin(), vec.end());
	Min = *min_element(vec.begin(), vec.end());
	cout << "�ő�l" << Max << "�ŏ��l" << Min << endl;


	Max = Min = vec[0];
	for (int i = 1; i < vec.size(); i++)
	{
		compare(Max, Min, vec[i]);
	}
	cout << "�ő�l" << Max << "�ŏ��l" << Min << endl;
	vec.emplace_back(50);
	//�C�e���[�^�Ń��[�v
	Max = Min = vec.at(0);
	for (auto itr = vec.begin(); itr != vec.end(); itr++)
	{
		if (Max < *itr)
		{
			Max = *itr;
		}
		if (Min > *itr)
		{
			Min = *itr;
		}

	}
	cout << "�ő�l" << Max << "�ŏ��l" << Min << endl;
	vec.emplace_back(1);

	//�͈�for�Ń��[�v
	Max = Min = vec.front();
	for (auto d: vec)
	{
		compare(Max, Min, d);
	}
	cout << "�ő�l" << Max << "�ŏ��l" << Min << endl;
}

/*void kansu(int a, int& b)
{
	cout << "a:" << a << endl
		<< "b:" << b << endl;
	a = 0;
	b = 1;
}
int main()
{
	int a = 100, b = 200;
	kansu(a, b);
	cout << "a" << a << endl
		<< "b" << b << < endl;
}*/