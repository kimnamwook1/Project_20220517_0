#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() //2�� �����ε� �Ǿ��ִ� == �����ڰ� 2�� ������� �ִ�.
	// : HP(0) , MP(0), GOLD(0) �޸𸮸� ����� �ʱ�ȭ �ϴ���. ����鼭 ���� �ų� �� ���� ����鼭 �ٷ� �ʱ�ȭ ==�ʱ�ȭ ����Ʈ, {}�ۿ� 
	// ���߿� int �� float ���� �ٸ� ���� ���� ���ǹ� ������.
{
	HP = 100;
	MP = 100;
	Gold = 0;
	/*cout << "Player�� ������" << endl;*/

}
Player::Player(int NewHP, int NewMP, int NewGold) // �׳� �̸� ���ΰ� new�� ���⼱ �����Ҵ��� �ƴ�// �Ķ����� �̹� �����Ϸ��� �����ִٴ� ���
{
	HP = NewHP;
	MP = NewMP;
	Gold = NewGold;
	cout << "Player�� ������" << endl;

}

Player::~Player()
{
	cout << "Player�� �Ҹ���" << endl;
}

void Player::Move()
{
	cout << "Player �̵�" << endl;
}

void Player::Attack()
{
}

void Player::Pickup()
{
}
