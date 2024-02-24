#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Hydra_Targeting_Mod_03.LightProj_Hydra_Targeting_Mod_03_C
// (None)

class UClass* ULightProj_Hydra_Targeting_Mod_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Hydra_Targeting_Mod_03_C");

	return Clss;
}


// LightProj_Hydra_Targeting_Mod_03_C LightProj_Hydra_Targeting_Mod_03.Default__LightProj_Hydra_Targeting_Mod_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Hydra_Targeting_Mod_03_C* ULightProj_Hydra_Targeting_Mod_03_C::GetDefaultObj()
{
	static class ULightProj_Hydra_Targeting_Mod_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Hydra_Targeting_Mod_03_C*>(ULightProj_Hydra_Targeting_Mod_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


