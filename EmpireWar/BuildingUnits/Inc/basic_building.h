#pragma once


#include <string>
#include <string.h>
#include "error.h"
#include "BuildUnitData.h"
#include "AttributeUnitData.h"
#include "attribute_data.h"


class BasicBuilding
{
private:
	DynastyType dynasty_;
	Area  area_;
	uint16_t blood_;
	Coordinate coord_;

public:
	BasicBuilding()
		: dynasty_(DynastyType::TRIBE)
		, blood_(0)
	{
		memset(&area_, 0, sizeof(area_));
		memset(&coord_, 0, sizeof(coord_));
	}

	BasicBuilding(const DynastyType dynasty, const Coordinate& coord, const Area& area, int blood)
		: dynasty_(dynasty)
		, coord_(coord)
		, area_(area)
		, blood_(blood)
		
	{

	}

	virtual ~BasicBuilding() = 0;

	// У�������Ƿ���ϵ�ͼ
	virtual bool check_coordinate(const Coordinate& coord) = 0;

	// ��ʼ��
	void InitBasicBuilding(const DynastyType dynasty, const Coordinate& coord, const Area& area, int blood)
	{
		dynasty_ = dynasty;
		coord_ = coord;
		area_ = area;
		blood_ = blood;
	}
	
	// ʱ������
	void dynastry_update(const DynastyType dynasty)
	{
		dynasty_ = dynasty;
	}

	// ����Ѫ��
	void blood_update(const uint16_t blood)
	{
		blood_ = blood;
	}
};


class CityBuilding: public BasicBuilding
{
private:
	Area core_area_;				// ���������С
	Area occupied_area_;			// ռ�������С
	uint8_t add_people_;			// ���������˿�����
	uint16_t total_pl_;

public:
	CityBuilding(const DynastyType dynastry, const Coordinate& coord, const Area& area, const Area& core_area, const Area& occupied_area, uint16_t blood, int people)
		: BasicBuilding(dynastry, coord, area, blood)
		, core_area_(core_area)
		, occupied_area_(occupied_area)
		, add_people_(people)
		, total_pl_(0)
	{

	}

	bool check_coordinate(const Coordinate& coord)
	{
		return true;
	}
};


class DepartBuilding : public BasicBuilding
{
public:
	DepartBuilding() = default;
	DepartBuilding(const DynastyType dynasty, const Coordinate& coord, const Area& area, int blood)
		: BasicBuilding(dynasty, coord, area, blood)
	{

	}

	void InitDepartBuilding(const DynastyType dynasty, const Coordinate& coord, const Area& area, int blood)
	{
		InitBasicBuilding(dynasty, coord, area, blood);
	}

	bool check_coordinate(const Coordinate& coord)
	{
		return true;
	}
};
