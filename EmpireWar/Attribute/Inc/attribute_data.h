#pragma once


#include "AttributeUnitData.h"


// 属性值获取
namespace property_value
{
	class CaptialAttribute
	{
	public:
		static constexpr Area& GetCaptialAera()
		{
			Area a{ AERA_CAPTIAL, AERA_CAPTIAL };
			return a;
		}

		static constexpr Area GetCaptialCoreAera()
		{
			Area a{ 15, 15 };
			return a;
		}

		static constexpr Area GetCaptialRadiationAera()
		{
			Area a{ 25, 25 };
			return a;
		}

		static constexpr uint16_t GetCaptialBlood(const DynastyType dynastry)
		{
			uint16_t blood = 0;
			switch (dynastry)
			{
			case DynastyType::TRIBE:
				blood = CAP_BLOOD_TRIBE;
				break;
			case DynastyType::AGRICULTURE:
				blood = CAP_BLOOD_AGRICULTURE;
				break;
			case DynastyType::FEUDAL:
				blood = CAP_BLOOD_FEUDAL;
				break;
			case DynastyType::INDUSTRY:
				blood = CAP_BLOOD_INDUSTRY;
				break;
			case DynastyType::SCIENCE:
				blood = CAP_BLOOD_SCIENCE;
				break;
			case DynastyType::INFORMATION:
				blood = CAP_BLOOD_INFORMATION;
				break;
			case DynastyType::INTERSTELLAR:
				blood = CAP_BLOOD_INTERSTELLAR;
				break;
			default:
				break;
			}
			return blood;
		}


	};
}