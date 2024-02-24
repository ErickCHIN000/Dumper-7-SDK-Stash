#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_EP1.LightProj_EP1_C
// (None)

class UClass* ULightProj_EP1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_EP1_C");

	return Clss;
}


// LightProj_EP1_C LightProj_EP1.Default__LightProj_EP1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_EP1_C* ULightProj_EP1_C::GetDefaultObj()
{
	static class ULightProj_EP1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_EP1_C*>(ULightProj_EP1_C::StaticClass()->DefaultObject);

	return Default;
}

}


