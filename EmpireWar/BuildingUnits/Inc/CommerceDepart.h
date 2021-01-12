#pragma once
#include "basic_building.h"
#include "Trader.h"
#include "Collector.h"


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

	// ��Ҫ�����̶�,���ݳ�����Ŀ��ʱ������
	uint8_t need_trader()
	{
		return 0;
	}

	// ��ǰ�̶Ӹ���
	uint8_t trader_num() const
	{
		return trader_num_;
	}

	// ��ǰ�ռ��ż���Ա����
	uint8_t collector_num() const
	{
		return collector_num_;
	}


private:
	Wealth wealth_;
	uint8_t city_num_;
	uint8_t trader_num_;
	uint8_t collector_num_;
	Trader* trader_;
	Collector* collector_;
};

