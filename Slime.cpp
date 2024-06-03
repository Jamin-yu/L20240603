#include "Slime.h"
#include <iostream>

using namespace std;

FSlime::FSlime()
{
}

FSlime::~FSlime()
{
}

void FSlime::Move()
{
	cout << "Slime";
	FCharacter::Move();
}

void FSlime::Attack()
{
	cout << "Slime";
	FCharacter::Attack();
}

