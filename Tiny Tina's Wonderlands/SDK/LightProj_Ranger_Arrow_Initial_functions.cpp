#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Ranger_Arrow_Initial.LightProj_Ranger_Arrow_Initial_C
// (None)

class UClass* ULightProj_Ranger_Arrow_Initial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Ranger_Arrow_Initial_C");

	return Clss;
}


// LightProj_Ranger_Arrow_Initial_C LightProj_Ranger_Arrow_Initial.Default__LightProj_Ranger_Arrow_Initial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Ranger_Arrow_Initial_C* ULightProj_Ranger_Arrow_Initial_C::GetDefaultObj()
{
	static class ULightProj_Ranger_Arrow_Initial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Ranger_Arrow_Initial_C*>(ULightProj_Ranger_Arrow_Initial_C::StaticClass()->DefaultObject);

	return Default;
}

}


