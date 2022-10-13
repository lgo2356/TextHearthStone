#pragma once

enum CardType
{
	CT_MINION = 0,
	CT_SPELL = 1,
	CT_WEAPON = 2
};

class Card
{
public:
	Card(int cardType) : _cardType(cardType)
	{

	}

	virtual ~Card()
	{

	}

public:
	int _cardType = -1;
};

class Minion : public Card
{
public:
	void SetName(char* name)
	{
		_name = name;
	}

public:
	Minion(int hp, int attack, int cost) :
		Card(CT_MINION), _hp(hp), _attack(attack), _cost(cost)
	{

	}

public:
	int _hp = 0;
	int _attack = 0;
	int _cost = 0;

private:
	char* _name = nullptr;
};

class Spell : public Card
{
public:
	Spell() : Card(CT_SPELL)
	{

	}
};

class Weapon : public Card
{
public:
	Weapon() : Card(CT_WEAPON)
	{

	}
};
