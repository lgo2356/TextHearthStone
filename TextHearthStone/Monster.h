#pragma once
#include <string>

enum MonsterType
{
	MT_SLIME = 0,
	MT_ORC = 1,
	MT_SKELETON = 2
};

class Monster
{
public:
	Monster(int monsterType) : _monsterType(monsterType)
	{
		switch (monsterType)
		{
		case MT_SLIME:
			_monsterName = "ΩΩ∂Û¿”";
			break;

		case MT_ORC:
			_monsterName = "ø¿≈©";
			break;
			
		case MT_SKELETON:
			_monsterName = "Ω∫ƒÃ∑π≈Ê";
			break;
		}
	}

	virtual ~Monster()
	{

	}

	virtual void PrintInfo();
	
private:
	virtual void PrintMonsterTypeText();

public:
	int _monsterType = -1;
	const char* _monsterName = nullptr;
	int _hp = 0;
	int _attack = 0;
};

class Slime : public Monster
{
public:
	Slime() : Monster(MT_SLIME)
	{
		_hp = 50;
		_attack = 4;
	}
};

class Orc : public Monster
{
public:
	Orc() : Monster(MT_ORC)
	{
		_hp = 80;
		_attack = 6;
	}
};

class Skeleton : public Monster
{
public:
	Skeleton() : Monster(MT_SKELETON)
	{
		_hp = 100;
		_attack = 7;
	}
};
