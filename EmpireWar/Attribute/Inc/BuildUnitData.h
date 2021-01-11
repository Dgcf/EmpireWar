#pragma once


#include <cstdint>


/***************************************
* �����ﳤ��
* ȡֵ��Χ��(0, 5]
****************************************/
struct BuildingSize
{
	uint8_t width;
	uint8_t height;
};


/***************************************
* ������ռ�����
* ȡֵ��Χ��(0, 25]
***************************************/
struct Area
{
	uint8_t left;		// ��߷�Χ��С
	uint8_t front;		// ǰ�淶Χ��С
};


/****************************************
* ����������,���½�Ϊ����Զ��
* X�᣺[0, 10000]
* Y�᣺[0, 10000]
****************************************/
struct Coordinate
{
	uint16_t x_coordinate;
	uint16_t y_coordinate;
};


/****************************************
* ��������
****************************************/
enum class BuildingType
{
	UNKNOWN,			// δ֪����
	CAPTIAL,			// �׶�
	CITY,				// ����
	SCIACADEMY,			// ��ѧԺ
	COMMERCEDEP,		// ����
	NATIONALSECURITY,	// ������
	DEFENSEMINISTRY,	// ������
	GEOUNDFORCES,		// ½����
	SEAPORT,			// ����
	AIRMISSILE,			// �ضԿյ���
	LOGGINGPOINT,		// ��ľ��
	MININGPORT,			// �����
	FARMLAND,			// ũ��
	OILGATHERPOINT,		// ʯ�Ͳɼ���
	GOLDPAGODA,			// ���
	TERRACOTTAWARRIORS,	// ������
	THEGREATWAR,		// ����ٸ
	SKYGARDEN,			// ���л�԰
	STATUEOFLBERTY,		// ����Ů����
	EIFFELTOWER,		// ���ƶ�����
};