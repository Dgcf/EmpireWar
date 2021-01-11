#pragma once
#include "basic_building.h"


class CommerceDepart : public DepartBuilding
{
public:
	CommerceDepart() = default;
	CommerceDepart(const DynastyType dynasty, const Coordinate& coord, const Area& area, int blood)
		: DepartBuilding(dynasty, coord, area, blood)
	{
		memset(&wealth_, 0, sizeof(wealth_));
	}

	void InitCommerceDepart(const DynastyType dynasty, const Coordinate& coord, const Area& area, int blood, const Wealth& wealth)
	{
		InitDepartBuilding(dynasty, coord, area, blood);
		memcpy(&wealth_, &wealth, sizeof(wealth_));
	}

private:
	Wealth wealth_;
};

