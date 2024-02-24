#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_TED_Zeus_Bounce_01.LightProj_TED_Zeus_Bounce_01_C
// (None)

class UClass* ULightProj_TED_Zeus_Bounce_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_TED_Zeus_Bounce_01_C");

	return Clss;
}


// LightProj_TED_Zeus_Bounce_01_C LightProj_TED_Zeus_Bounce_01.Default__LightProj_TED_Zeus_Bounce_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_TED_Zeus_Bounce_01_C* ULightProj_TED_Zeus_Bounce_01_C::GetDefaultObj()
{
	static class ULightProj_TED_Zeus_Bounce_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_TED_Zeus_Bounce_01_C*>(ULightProj_TED_Zeus_Bounce_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


