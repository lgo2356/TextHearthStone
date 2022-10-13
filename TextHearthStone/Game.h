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
	void ChooseClass();  // �÷��̾� ���� ���� �Լ�
	void InitTurn();  // ���� �÷��� �� ���� �Լ�
	void ChangeTurn();  // �� ���� �Լ�

private:
	Player* _player = nullptr;
	Field* _field = nullptr;
};
