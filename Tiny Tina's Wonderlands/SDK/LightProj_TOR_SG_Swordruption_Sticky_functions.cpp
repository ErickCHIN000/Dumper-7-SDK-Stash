#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_TOR_SG_Swordruption_Sticky.LightProj_TOR_SG_Swordruption_Sticky_C
// (None)

class UClass* ULightProj_TOR_SG_Swordruption_Sticky_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_TOR_SG_Swordruption_Sticky_C");

	return Clss;
}


// LightProj_TOR_SG_Swordruption_Sticky_C LightProj_TOR_SG_Swordruption_Sticky.Default__LightProj_TOR_SG_Swordruption_Sticky_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_TOR_SG_Swordruption_Sticky_C* ULightProj_TOR_SG_Swordruption_Sticky_C::GetDefaultObj()
{
	static class ULightProj_TOR_SG_Swordruption_Sticky_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_TOR_SG_Swordruption_Sticky_C*>(ULightProj_TOR_SG_Swordruption_Sticky_C::StaticClass()->DefaultObject);

	return Default;
}

}


