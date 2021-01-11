#pragma once

#include "../../Attribute/Inc/BuildUnitData.h"


class BasicBuilding
{
private:
	BuildingSize  size_;
	uint16_t blood_;

public:
	BasicBuilding(const BuildingSize& size, int blood)
		: size_(size)
		, blood_(blood)
	{

	}

	virtual ~BasicBuilding()
	{

	}


};


class CityBuilding: public BasicBuilding
{
private:
	Area core_area_;				// 核心面积大小
	Area occupied_area_;			// 占领面积大小
	unsigned int people_;			// 增加人口数量

public:
	CityBuilding(const BuildingSize& size, int blood, Area core_area, Area occupied_area, int people)
		: BasicBuilding(size, blood)
		, core_area_(core_area)
		, occupied_area_(occupied_area)
		, people_(people)
	{

	}


};