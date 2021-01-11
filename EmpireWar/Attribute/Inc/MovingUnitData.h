#pragma once


#include <cstdint>
#include "type.h"


/***************************************************
* ��������
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
* װ�ױ�
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
* �������
***************************************************/
enum class RocketType
{
	CATAPULT,		//
	ARTILLERY,		//
	HOWITZER,		//
	ROCKET			//
};


/***************************************************
* �ƶ���Ԫ����
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
