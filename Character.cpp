#include "Character.h"
#include <iostream>

using namespace std;

FCharacter::FCharacter()
{
	HP = 100;
}

FCharacter::~FCharacter()
{
}

void FCharacter::Move()
{
	cout << "움직임" << endl;
}

void FCharacter::Attack()
{
	cout << "공격" << endl;
}

void FCharacter::SetHP(int NewHP)
{
	HP = NewHP;
}
