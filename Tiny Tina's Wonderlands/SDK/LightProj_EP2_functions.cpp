#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_EP2.LightProj_EP2_C
// (None)

class UClass* ULightProj_EP2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_EP2_C");

	return Clss;
}


// LightProj_EP2_C LightProj_EP2.Default__LightProj_EP2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_EP2_C* ULightProj_EP2_C::GetDefaultObj()
{
	static class ULightProj_EP2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_EP2_C*>(ULightProj_EP2_C::StaticClass()->DefaultObject);

	return Default;
}

}


