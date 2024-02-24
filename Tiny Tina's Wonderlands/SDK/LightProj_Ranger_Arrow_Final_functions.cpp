#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Ranger_Arrow_Final.LightProj_Ranger_Arrow_Final_C
// (None)

class UClass* ULightProj_Ranger_Arrow_Final_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Ranger_Arrow_Final_C");

	return Clss;
}


// LightProj_Ranger_Arrow_Final_C LightProj_Ranger_Arrow_Final.Default__LightProj_Ranger_Arrow_Final_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Ranger_Arrow_Final_C* ULightProj_Ranger_Arrow_Final_C::GetDefaultObj()
{
	static class ULightProj_Ranger_Arrow_Final_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Ranger_Arrow_Final_C*>(ULightProj_Ranger_Arrow_Final_C::StaticClass()->DefaultObject);

	return Default;
}

}


