#include "Player.h"
#include <iostream>

using namespace std;

FPlayer::FPlayer()
{
}

FPlayer::~FPlayer()
{
}

void FPlayer::Move()
{
	cout << "Player �̵�";
	FCharacter::Move();
}

void FPlayer::Attack()
{
	cout << "Player ����";
	FCharacter::Attack();

}

void FPlayer::Die()
{
}
