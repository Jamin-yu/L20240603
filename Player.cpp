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
	cout << "Player 이동";
	FCharacter::Move();
}

void FPlayer::Attack()
{
	cout << "Player 공격";
	FCharacter::Attack();

}

void FPlayer::Die()
{
}
