#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_BL2.LightProj_BL2_C
// (None)

class UClass* ULightProj_BL2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_BL2_C");

	return Clss;
}


// LightProj_BL2_C LightProj_BL2.Default__LightProj_BL2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_BL2_C* ULightProj_BL2_C::GetDefaultObj()
{
	static class ULightProj_BL2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_BL2_C*>(ULightProj_BL2_C::StaticClass()->DefaultObject);

	return Default;
}

}


