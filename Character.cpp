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
	cout << "������" << endl;
}

void FCharacter::Attack()
{
	cout << "����" << endl;
}

void FCharacter::SetHP(int NewHP)
{
	HP = NewHP;
}
