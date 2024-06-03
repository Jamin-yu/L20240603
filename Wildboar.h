#pragma once
#include "Character.h"

class FWildboar : public FCharacter
{
public:
	FWildboar();
	virtual~FWildboar();

	virtual void Move() override;
	void Attack();
};

