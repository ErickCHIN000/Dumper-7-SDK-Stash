#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_SG_LastRites_Bounce_02.LightProj_SG_LastRites_Bounce_02_C
// (None)

class UClass* ULightProj_SG_LastRites_Bounce_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_SG_LastRites_Bounce_02_C");

	return Clss;
}


// LightProj_SG_LastRites_Bounce_02_C LightProj_SG_LastRites_Bounce_02.Default__LightProj_SG_LastRites_Bounce_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_SG_LastRites_Bounce_02_C* ULightProj_SG_LastRites_Bounce_02_C::GetDefaultObj()
{
	static class ULightProj_SG_LastRites_Bounce_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_SG_LastRites_Bounce_02_C*>(ULightProj_SG_LastRites_Bounce_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


