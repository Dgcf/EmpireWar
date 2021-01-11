#pragma once


#include <cstdint>


// �����С
#define AERA_CAPTIAL		50			// �׶�����
#define AERA_CITY			40			// ����
#define AERA_ORDINARY		10			// ��������
#define AERA_FARMLAND		3			// ũ��
#define AERA_OIL			3			// ʯ�Ͳɼ���
#define AERA_COLLECTION		2			// ����/ľ�Ĳɼ���


// �׶�Ѫ��
#define CAP_BLOOD_TRIBE			7000
#define CAP_BLOOD_AGRICULTURE	7500
#define CAP_BLOOD_FEUDAL		8000
#define CAP_BLOOD_INDUSTRY		8500
#define CAP_BLOOD_SCIENCE		9000
#define CAP_BLOOD_INFORMATION	9500
#define CAP_BLOOD_INTERSTELLAR	10000


// �����˿�����
#define POPULATION_NUM_CITY		10				// ����һ�ǿ���������
#define POPULATION_NUM_CAPTIAL	20				// ����׶�����������
#define POPULATION_NUM_TRIBE	10				// ũҵʱ��


/***********************************************
* ʱ��
***********************************************/
enum class DynastyType
{
	TRIBE,					// ����ʱ��
	AGRICULTURE,			// ũҵʱ��
	FEUDAL,					// �⽨ʱ��
	INDUSTRY,				// ��ҵʱ��
	SCIENCE,				// �Ƽ�ʱ��
	INFORMATION,			// ��Ϣʱ��
	INTERSTELLAR			// �Ǽ�ʱ��
};


/**********************************************
* �Ƹ�����
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
* ����������
* ������
* ������Χ
**********************************************/
struct AttackCapability
{
	uint16_t lethality;
	uint16_t letharange;
};


/*********************************************
* �Ƹ�
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