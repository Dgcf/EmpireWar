#pragma once


#include <cstdint>


/***************************************
* 面积
* 建筑物实际面积: 取值范围：(0, 5]
* 核心面积:取值范围：(0,15]
* 建筑物辐射面积:取值范围：(0, 25]
****************************************/
struct Area
{
	uint8_t length;
	uint8_t width;
};


/****************************************
* 建筑物坐标,左下角为坐标远点
* X轴：[0, 10000]
* Y轴：[0, 10000]
****************************************/
struct Coordinate
{
	uint16_t x_coordinate;
	uint16_t y_coordinate;
};


/****************************************
* 建筑类型
****************************************/
enum class BuildingType
{
	UNKNOWN,			// 未知类型
	CAPTIAL,			// 首都
	CITY,				// 城市
	SCIACADEMY,			// 科学院
	COMMERCEDEP,		// 商务部
	NATIONALSECURITY,	// 国安局
	DEFENSEMINISTRY,	// 国防部
	GEOUNDFORCES,		// 陆军部
	SEAPORT,			// 海港
	AIRMISSILE,			// 地对空导弹
	LOGGINGPOINT,		// 伐木点
	MININGPORT,			// 开矿点
	FARMLAND,			// 农田
	OILGATHERPOINT,		// 石油采集点
	GOLDPAGODA,			// 奇观
	TERRACOTTAWARRIORS,	// 金字塔
	THEGREATWAR,		// 兵马俑
	SKYGARDEN,			// 空中花园
	STATUEOFLBERTY,		// 自由女神像
	EIFFELTOWER,		// 埃菲尔铁塔
};
