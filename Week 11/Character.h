#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
class Assassin
{
private:
	int health = 100;
	int attack;
public:
	Assassin()
	{
		attack = rand() % 50 + 1;
	}
	void SetHealth()
	{
		health = 100;
	}
	int GetHealth()
	{
		return health;
	}
	
	int GetAttack()
	{
		return attack;
	}
};;