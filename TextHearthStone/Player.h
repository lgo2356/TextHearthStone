#pragma once

enum PlayerType
{
	PT_WARRIOR = 0,
	PT_PRIEST = 1,
	PT_MAGE = 2,
	PT_SHAMAN = 3,
	PT_HUNTER = 4,
	PT_PALADIN = 5,
	PT_DRUID = 6,
	PT_WARLOCK = 7,
	PT_ROGUE = 8
};

class Player
{
public:
	Player(int playerType) : _playerType(playerType)
	{

	}

	virtual ~Player()
	{

	}

public:
	int _playerType = -1;
	int _curMana = 0;
	int _totalMana = 0;
	int _hp = 30;
	int _armor = 0;
	int _attack = 0;
};
