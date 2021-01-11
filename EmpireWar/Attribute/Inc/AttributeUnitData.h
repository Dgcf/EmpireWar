#pragma once


#include <cstdint>


// 面积大小
#define AERA_CAPTIAL		50			// 首都建筑
#define AERA_CITY			40			// 城市
#define AERA_ORDINARY		10			// 其他建筑
#define AERA_FARMLAND		3			// 农田
#define AERA_OIL			3			// 石油采集点
#define AERA_COLLECTION		2			// 矿物/木材采集点


// 首都血量
#define CAP_BLOOD_TRIBE			7000
#define CAP_BLOOD_AGRICULTURE	7500
#define CAP_BLOOD_FEUDAL		8000
#define CAP_BLOOD_INDUSTRY		8500
#define CAP_BLOOD_SCIENCE		9000
#define CAP_BLOOD_INFORMATION	9500
#define CAP_BLOOD_INTERSTELLAR	10000


// 增加人口数量
#define POPULATION_NUM_CITY		10				// 新增一城可增加数量
#define POPULATION_NUM_CAPTIAL	20				// 添加首都增加人数量
#define POPULATION_NUM_TRIBE	10				// 农业时代


/***********************************************
* 时代
***********************************************/
enum class DynastyType
{
	TRIBE,					// 部落时代
	AGRICULTURE,			// 农业时代
	FEUDAL,					// 封建时代
	INDUSTRY,				// 工业时代
	SCIENCE,				// 科技时代
	INFORMATION,			// 信息时代
	INTERSTELLAR			// 星际时代
};


/**********************************************
* 财富类型
**********************************************/
enum class WealthType
{
	MONEY,
	PETROLEUM,
	MINERAL,
	WOOD,
	FOOD,
	KNOWLEDGE
};


/**********************************************
* 攻击能力：
* 攻击力
* 攻击范围
**********************************************/
struct AttackCapability
{
	uint16_t lethality;
	uint16_t letharange;
};


/*********************************************
* 财富
*********************************************/
struct Wealth
{
	uint32_t	Money;
	uint32_t	Petroleum;
	uint32_t	Mineral;
	uint32_t	Wood;
	uint32_t	Food;
};


/***************************************************
*
***************************************************/
struct MovCommon
{
	AttackCapability attack;
	uint8_t blood;
	uint8_t armor;
	uint8_t speed;
};