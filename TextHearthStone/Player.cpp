#include <iostream>
#include "Player.h"

using namespace std;

void Player::PrintInfo()
{
	cout << "----  �÷��̾� ����  ----" << endl;
	cout << " CLASS: " << _playerClass << endl;
	cout << " HP: " << _hp << endl;
	cout << " ATK: " << _attack << endl;
	cout << " Armor: " << _armor << endl;
	cout << " Mana: " << _curMana << " / " << _totalMana << endl;
	cout << "-------------------------" << endl;
}
