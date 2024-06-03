#include "Wildboar.h"
#include <iostream>

using namespace std;

FWildboar::FWildboar()
{
}

FWildboar::~FWildboar()
{
}

void FWildboar::Move()
{
	cout << "Boar";
	FCharacter::Move();
}

void FWildboar::Attack()
{
	cout << "Boar";
	FCharacter::Attack();
}

