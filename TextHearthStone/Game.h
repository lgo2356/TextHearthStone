#pragma once

class Player;
class Field;

class Game
{
public:
	Game();
	~Game();

	void Init();
	void Update();
	void ChooseClass();  // 플레이어 직업 선택 함수
	void InitTurn();  // 최초 플레이 턴 결정 함수
	void ChangeTurn();  // 턴 변경 함수

private:
	Player* _player = nullptr;
	Field* _field = nullptr;
};
