#pragma once


#include "AttributeUnitData.h"
#include "attribute_data.h"


class BasicMoving
{
private:
	MovAverage mov_;
};


// ���й�����
class FightingFamily: public BasicMoving
{
private:
	AttackCapability attack_;
	
};


// �޹�����
class GentleFamily : public BasicMoving
{

};
