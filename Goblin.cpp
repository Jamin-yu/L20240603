#include "Goblin.h"
#include <iostream>

using namespace std;

FGoblin::FGoblin()
{
}

FGoblin::~FGoblin()
{
}

void FGoblin::Move()
{
	cout << "Goblin";
	FCharacter::Move();
}

void FGoblin::Attack()
{
	cout << "Goblin";
	FCharacter::Attack();
}
