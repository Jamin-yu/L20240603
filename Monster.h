#pragma once
class FMonster
{
public:
	FMonster();
	~FMonster();

	void Move();
	void Attack();

private:
	int HP;

	void Die();
};

