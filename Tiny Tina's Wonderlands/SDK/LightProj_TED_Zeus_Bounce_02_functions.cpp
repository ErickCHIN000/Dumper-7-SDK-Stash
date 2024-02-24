#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_TED_Zeus_Bounce_02.LightProj_TED_Zeus_Bounce_02_C
// (None)

class UClass* ULightProj_TED_Zeus_Bounce_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_TED_Zeus_Bounce_02_C");

	return Clss;
}


// LightProj_TED_Zeus_Bounce_02_C LightProj_TED_Zeus_Bounce_02.Default__LightProj_TED_Zeus_Bounce_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_TED_Zeus_Bounce_02_C* ULightProj_TED_Zeus_Bounce_02_C::GetDefaultObj()
{
	static class ULightProj_TED_Zeus_Bounce_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_TED_Zeus_Bounce_02_C*>(ULightProj_TED_Zeus_Bounce_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


