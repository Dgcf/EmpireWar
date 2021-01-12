#pragma once


#include "AttributeUnitData.h"
#include "attribute_data.h"


class BasicMoving
{
private:
	MovAverage mov_;
};


// 具有攻击性
class FightingFamily: public BasicMoving
{
private:
	AttackCapability attack_;
	
};


// 无攻击性
class GentleFamily : public BasicMoving
{

};
