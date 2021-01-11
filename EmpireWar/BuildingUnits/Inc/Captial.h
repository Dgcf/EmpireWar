#pragma once

#include "basic_building.h"
#include "CommerceDepart.h"
#include "DefenseMinistry.h"
#include "NationalSecurity.h"
#include "SciencesAcademy.h"


class Captial : public CityBuilding
{
private:
	bool				cre_comerces_;
	bool				cre_defense_;
	bool				cre_security_;
	bool				cre_sciences_;
	CommerceDepart		commerce_;			// 商务部
	DefenseMinistry		defense_;			// 国防部
	NationalSecurity	security_;			// 国安局
	SciencesAcademy		sciences_;			// 科学院

public:
	Captial(const DynastyType dynastry, const Coordinate& coord)
		: CityBuilding(dynastry,
			coord,
			property_value::CaptialAttribute::GetCaptialAera(),
			property_value::CaptialAttribute::GetCaptialCoreAera(),
			property_value::CaptialAttribute::GetCaptialRadiationAera(),
			property_value::CaptialAttribute::GetCaptialBlood(dynastry),
			POPULATION_NUM_CAPTIAL)
	{
	}

	int add_commerce()
	{
		if (cre_comerces_)
		{
			return BUILDING_IS_EXIST_ID;
		}
		return NO_ERROR;
	}
};

