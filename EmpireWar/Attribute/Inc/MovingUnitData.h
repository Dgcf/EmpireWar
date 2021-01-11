#pragma once


#include <cstdint>
#include "type.h"


/***************************************************
* 步兵类型
***************************************************/
enum class InfantryType
{
	UNKNOWN,
	SLINGER,		// 
	ARCHERS,		//
	MUSKETEER,		//
	MODERN			//
};


/***************************************************
* 装甲兵
***************************************************/
enum class ArmoredType
{
	UNKNOWN,		//
	CAVALARY,		//
	ARMOREDFORCES,	//
	LIGHTTANK,		//
	TANK,			//
	MAINTANK		//
};


/***************************************************
* 火箭部队
***************************************************/
enum class RocketType
{
	CATAPULT,		//
	ARTILLERY,		//
	HOWITZER,		//
	ROCKET			//
};


/***************************************************
* 移动单元类型
***************************************************/
enum class MovingType
{
	UNKNOWN,
	FARMER,
	SCIENTIST,
	TRADER,
	COLLECTOR,
	INFANTRY,
	ARMORCED,
	ROCKET,
	AIRDEFENSE,
};
