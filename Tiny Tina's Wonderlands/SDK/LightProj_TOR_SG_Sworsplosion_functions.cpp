#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_TOR_SG_Sworsplosion.LightProj_TOR_SG_Sworsplosion_C
// (None)

class UClass* ULightProj_TOR_SG_Sworsplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_TOR_SG_Sworsplosion_C");

	return Clss;
}


// LightProj_TOR_SG_Sworsplosion_C LightProj_TOR_SG_Sworsplosion.Default__LightProj_TOR_SG_Sworsplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_TOR_SG_Sworsplosion_C* ULightProj_TOR_SG_Sworsplosion_C::GetDefaultObj()
{
	static class ULightProj_TOR_SG_Sworsplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_TOR_SG_Sworsplosion_C*>(ULightProj_TOR_SG_Sworsplosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


