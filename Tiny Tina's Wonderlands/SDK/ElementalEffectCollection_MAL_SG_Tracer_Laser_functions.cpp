#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_MAL_SG_Tracer_Laser.ElementalEffectCollection_MAL_SG_Tracer_Laser_C
// (None)

class UClass* UElementalEffectCollection_MAL_SG_Tracer_Laser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_MAL_SG_Tracer_Laser_C");

	return Clss;
}


// ElementalEffectCollection_MAL_SG_Tracer_Laser_C ElementalEffectCollection_MAL_SG_Tracer_Laser.Default__ElementalEffectCollection_MAL_SG_Tracer_Laser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_MAL_SG_Tracer_Laser_C* UElementalEffectCollection_MAL_SG_Tracer_Laser_C::GetDefaultObj()
{
	static class UElementalEffectCollection_MAL_SG_Tracer_Laser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_MAL_SG_Tracer_Laser_C*>(UElementalEffectCollection_MAL_SG_Tracer_Laser_C::StaticClass()->DefaultObject);

	return Default;
}

}


