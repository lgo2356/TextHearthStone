#include "Monster.h"
#include <iostream>

using namespace std;

void Monster::PrintInfo()
{
	cout << "----  ���� ����  ----" << endl;
	cout << " NAME: " << _monsterName << endl;
	cout << " HP: " << _hp << endl;
	cout << " ATT: " << _attack << endl;
	cout << "-----------------------" << endl;
}

void Monster::PrintMonsterTypeText()
{
	
}
