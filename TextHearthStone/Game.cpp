#include <iostream>
#include "Game.h"
#include "Player.h"
#include "Field.h"

using namespace std;

Game::Game()
{

}

Game::~Game()
{
	if (_field != nullptr) delete _field;
}

void Game::Init()
{
	_field = new Field();

	if (_player == nullptr) ChooseClass();

	InitTurn();
}

/*
* InitTurn() �Լ��� ���� ������ �÷��̾� �Ǵ� ���Ͱ� �÷��� ����
* Field::Update() �Լ� �������� ī�� ��ο�, ���, ���� ���� ���� �� �� ����
* ���� ����Ǹ� Field::Update() �Լ��� �������� ���� �÷��̾� �Ǵ� ���Ͱ� ���� ����
*/
void Game::Update()
{
	_field->Update(_player);
	ChangeTurn();
}

void Game::ChooseClass()
{
	while (_player == nullptr)
	{
		cout << "------------------------------------------------" << endl;
		cout << "������ ������." << endl;
		cout << "1) ����" << endl;
		cout << "2) ����" << endl;
		cout << "3) ������" << endl;
		cout << "4) �ּ���" << endl;
		cout << "5) ��ɲ�" << endl;
		cout << "6) �����" << endl;
		cout << "7) ����̵�" << endl;
		cout << "8) �渶����" << endl;
		cout << "9) ����" << endl;
		cout << "------------------------------------------------" << endl;

		cout << "> ";
		int input = -1;
		cin >> input;

		switch (input)
		{
		case PT_WARRIOR:
			_player = new Warrior();
			break;

		case PT_PRIEST:
			_player = new Priest();
			break;

		case PT_MAGE:
			_player = new Mage();
			break;

		case PT_SHAMAN:
			_player = new Shaman();
			break;

		case PT_HUNTER:
			_player = new Hunter();
			break;

		case PT_PALADIN:
			_player = new Paladin();
			break;

		case PT_DRUID:
			_player = new Druid();
			break;

		case PT_WARLOCK:
			_player = new Warlock();
			break;

		case PT_ROGUE:
			_player = new Rogue();
			break;
		}

		if (_player != nullptr) 
		{
			cout << _player->_playerClass << "(��)�� �����߽��ϴ�!" << endl;
			cout << endl;	cout << endl;	cout << endl;
		}
	}
}

void Game::InitTurn()
{
	// ������ �÷��̾� ���� �÷���
	// ���� ��ҷ� ���� or �÷��̾� �� ���� ����
	_player->isTurn = true;
}

void Game::ChangeTurn()
{
	// �� ����Ī �Լ�
	_player->isTurn = !_player->isTurn;
}
