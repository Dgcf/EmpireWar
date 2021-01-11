#pragma once


#include <cstdint>


/***************************************
* ���
* ������ʵ�����: ȡֵ��Χ��(0, 5]
* �������:ȡֵ��Χ��(0,15]
* ������������:ȡֵ��Χ��(0, 25]
****************************************/
struct Area
{
	uint8_t length;
	uint8_t width;
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
