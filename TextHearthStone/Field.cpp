#include <iostream>
#include "Field.h"
#include "Monster.h"
#include "Player.h"
#include "Card.h"

using namespace std;

Field::Field()
{
	
}

Field::~Field()
{
	if (_minions.size() != 0) _minions.clear();
	if (_monster != nullptr) delete _monster;
}

void Field::Update(Player* player)
{
	if (_monster == nullptr) CreateMonster();

	// 플레이어 턴이면 마나 증가
	if (player->isTurn)
	{
		if (player->_totalMana < 10)
		{
			player->_totalMana++;
			player->_curMana++;
		}
	}

	while (true)
	{
		_monster->PrintInfo();
		PrintBattleField();
		player->PrintInfo();

		if (player->isTurn) 
		{
			ChosenAction chosenAction = ChooseAction();

			switch (chosenAction)
			{
			case CA_ATTACK:
				cout << "공격!" << endl;
				break;

			case CA_USE_CARD:
				cout << "카드 사용!" << endl;
				break;

			case CA_END_TURN:
				cout << "턴 종료" << endl;
				return;
			}
		} 
		else
		{
			cout << "몬스터 턴" << endl;
			return;
		}
	}
}

void Field::CreateMonster()
{
	int randValue = rand() % 3;

	switch (randValue)
	{
	case MT_SLIME:
		_monster = new Slime();
		break;

	case MT_ORC:
		_monster = new Orc();
		break;

	case MT_SKELETON:
		_monster = new Skeleton();
		break;
	}
}

ChosenAction Field::ChooseAction()
{
	int chosenAction = -1;

	cout << "행동을 선택하세요." << endl;
	cout << "1) 공격		2) 카드 사용		3) 턴 종료" << endl;

	cin >> chosenAction;

	switch (chosenAction)
	{
	case CA_ATTACK:
		return CA_ATTACK;

	case CA_USE_CARD:
		return CA_USE_CARD;

	case CA_END_TURN:
		return CA_END_TURN;
	}
}

void Field::PrintBattleField()
{
	cout << "-------------------------------------------------------------------" << endl;
	cout << endl;	cout << endl;	cout << endl;	cout << endl;	cout << endl;
	cout << endl;	cout << endl;	cout << endl;	cout << endl;	cout << endl;
	cout << endl;	cout << endl;	cout << endl;	cout << endl;	cout << endl;
	cout << "-------------------------------------------------------------------" << endl;
}

void Field::PrintPlayerTurnText()
{
	cout << "플레이어 턴" << endl;
}

void Field::PrintEnermyTurnText()
{
	cout << "상대 턴" << endl;
}
