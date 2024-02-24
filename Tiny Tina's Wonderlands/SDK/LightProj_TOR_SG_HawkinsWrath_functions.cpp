#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_TOR_SG_HawkinsWrath.LightProj_TOR_SG_HawkinsWrath_C
// (None)

class UClass* ULightProj_TOR_SG_HawkinsWrath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_TOR_SG_HawkinsWrath_C");

	return Clss;
}


// LightProj_TOR_SG_HawkinsWrath_C LightProj_TOR_SG_HawkinsWrath.Default__LightProj_TOR_SG_HawkinsWrath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_TOR_SG_HawkinsWrath_C* ULightProj_TOR_SG_HawkinsWrath_C::GetDefaultObj()
{
	static class ULightProj_TOR_SG_HawkinsWrath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_TOR_SG_HawkinsWrath_C*>(ULightProj_TOR_SG_HawkinsWrath_C::StaticClass()->DefaultObject);

	return Default;
}

}


