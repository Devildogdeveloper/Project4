#pragma once
#include <vector>
#include <array>
#include "Player.h"

class Game
{
private:
	// Inputs
	void ClearInput();
	int GetInput();

	// Messages
	void CongChamp(Player& player);
	void MatchPoints(Player& player);
	void ShowKeep(array<int, 6>& keptDice);
	void ShowRolled(vector<int>& dicePool);


	// Setup
	void PromptNumPlayers();
	void SetupPlayerNames(vector<Player>& players);

	// Play
	array<int, 6> DiceCounter(vector<int>& dicePool);
	bool CheckForWin(int score);
	bool IsValid(unsigned int& selection, vector<int>& dicePool);
	bool ScoringDice(array<int, 6>& diceCount);
	int Score(vector<int>& dicePool, int die, array<int, 6>& diceCount, array<int, 6>& keptDice);
	int Straight(array<int, 6>& diceCount);
	int Pairs(array<int,6>& diceCount);
	int fourOfAKind(array<int,6>& diceCount);
	int doubleTriple(array<int,6>& diceCount);
	int fiveOfAKind(array<int,6>& diceCount);
	int sixOfAKind(array<int,6>& diceCount);
	int threePairs(array<int,6>& diceCount);
	int fullHouse(array<int,6>& diceCount);
	void DiceRoll(vector<int>& dicePool);
	Player GetChampion(vector<Player> players);

	// Private Loops
	int Turn(Player& player);
	Player Play();

public:
	void MainGameLoop();
};