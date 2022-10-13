#include <iostream>
#include "Player.h"

using namespace std;

void Player::PrintInfo()
{
	cout << "----  플레이어 정보  ----" << endl;
	cout << " CLASS: " << _playerClass << endl;
	cout << " HP: " << _hp << endl;
	cout << " ATK: " << _attack << endl;
	cout << " Armor: " << _armor << endl;
	cout << " Mana: " << _curMana << " / " << _totalMana << endl;
	cout << "-------------------------" << endl;
}
