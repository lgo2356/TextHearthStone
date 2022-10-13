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
* InitTurn() 함수로 정한 순서로 플레이어 또는 몬스터가 플레이 진행
* Field::Update() 함수 로직데로 카드 드로우, 사용, 전투 등을 진행 후 턴 종료
* 턴이 종료되면 Field::Update() 함수를 빠져나와 다음 플레이어 또는 몬스터가 턴을 진행
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
		cout << "직업을 고르세요." << endl;
		cout << "1) 전사" << endl;
		cout << "2) 사제" << endl;
		cout << "3) 마법사" << endl;
		cout << "4) 주술사" << endl;
		cout << "5) 사냥꾼" << endl;
		cout << "6) 성기사" << endl;
		cout << "7) 드루이드" << endl;
		cout << "8) 흑마술사" << endl;
		cout << "9) 도적" << endl;
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
			cout << _player->_playerClass << "(을)를 선택했습니다!" << endl;
			cout << endl;	cout << endl;	cout << endl;
		}
	}
}

void Game::InitTurn()
{
	// 무조건 플레이어 먼저 플레이
	// 랜덤 요소로 몬스터 or 플레이어 턴 결정 예정
	_player->isTurn = true;
}

void Game::ChangeTurn()
{
	// 턴 스위칭 함수
	_player->isTurn = !_player->isTurn;
}
