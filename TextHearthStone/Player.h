#pragma once

enum PlayerType
{
	PT_WARRIOR = 1,
	PT_PRIEST = 2,
	PT_MAGE = 3,
	PT_SHAMAN = 4,
	PT_HUNTER = 5,
	PT_PALADIN = 6,
	PT_DRUID = 7,
	PT_WARLOCK = 8,
	PT_ROGUE = 9
};

class Player
{
public:
	Player(int playerType) : _playerType(playerType)
	{
		switch (playerType)
		{
		case PT_WARRIOR:
			_playerClass = "전사";
			break;

		case PT_PRIEST:
			_playerClass = "사제";
			break;

		case PT_MAGE:
			_playerClass = "마법사";
			break;

		case PT_SHAMAN:
			_playerClass = "주술사";
			break;

		case PT_HUNTER:
			_playerClass = "사냥꾼";
			break;

		case PT_PALADIN:
			_playerClass = "성기사";
			break;

		case PT_DRUID:
			_playerClass = "드루이드";
			break;

		case PT_WARLOCK:
			_playerClass = "흑마술사";
			break;

		case PT_ROGUE:
			_playerClass = "도적";
			break;
		}
	}

	virtual ~Player()
	{

	}

	virtual void PrintInfo();

public:
	int _playerType = -1;
	const char* _playerClass = nullptr;	
	int _curMana = 0;
	int _totalMana = 0;
	int _hp = 30;
	int _armor = 0;
	int _attack = 0;
	bool isTurn = false;
};

class Warrior : public Player
{
public:
	Warrior() : Player(PT_WARRIOR)
	{

	}
};

class Priest : public Player
{
public:
	Priest() : Player(PT_PRIEST)
	{

	}
};

class Mage : public Player
{
public:
	Mage() : Player(PT_MAGE)
	{

	}
};

class Shaman : public Player
{
public:
	Shaman() : Player(PT_SHAMAN)
	{

	}
};

class Hunter : public Player
{
public:
	Hunter() : Player(PT_HUNTER)
	{
		
	}
};

class Paladin : public Player
{
public:
	Paladin() : Player(PT_PALADIN)
	{

	}
};

class Druid : public Player
{
public:
	Druid() : Player(PT_DRUID)
	{

	}
};

class Warlock : public Player
{
public:
	Warlock() : Player(PT_WARLOCK)
	{

	}
};

class Rogue : public Player
{
public:
	Rogue() : Player(PT_ROGUE)
	{

	}
};
