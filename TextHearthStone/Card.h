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
	Minion() : Card(CT_MINION)
	{

	}
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
