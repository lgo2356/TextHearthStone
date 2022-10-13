#pragma once
#include <list>

using namespace std;

class Player;
class Monster;
class Minion;

enum ChosenAction
{
	CA_ATTACK = 1,
	CA_USE_CARD = 2,
	CA_END_TURN = 3
};

class Field
{
public:
	Field();
	~Field();

	void Update(Player* player);
	
private:
	void CreateMonster();
	ChosenAction ChooseAction();
	void PrintBattleField();
	void PrintPlayerTurnText();
	void PrintEnermyTurnText();

private:
	Monster* _monster = nullptr;
	list<int> _minions;
};
