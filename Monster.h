#pragma once
#include "Character.h"

class Monster : public Character
{
public:
	Monster();
	virtual ~Monster(); // �Ҹ��ڿ��� �� virtual�� �ٿ���� �׳� ��������
	
	int HP;
	int Gold;

 //�Լ��� ������ ���ڰ� �ٸ��� �ٸ� �Լ��� �ν� == �Լ������ε��Ѵ�. == name mangling
	//void Move(int B);�� �ؿ��� 
	virtual void Move(); // virtual�̸� �޸� �� �����ͷ� ���ͼ� �ڽĿ� �ִ��� üũ == �ڽĿ��� ������ ���ְڴ�.
	virtual void Attack();
	virtual void Drop();
};

