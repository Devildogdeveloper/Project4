#pragma once
#include "Player.h"
class human : Player
{
private:
	
public:
	human();
	human(string name);
	
	string Name();
	void AddScore(int value);
	int Score();
	void SetInGame();
	bool InGame();
	~human();
};

