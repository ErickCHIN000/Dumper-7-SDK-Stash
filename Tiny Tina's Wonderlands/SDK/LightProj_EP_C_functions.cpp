#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_EP_C.LightProj_EP_C_C
// (None)

class UClass* ULightProj_EP_C_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_EP_C_C");

	return Clss;
}


// LightProj_EP_C_C LightProj_EP_C.Default__LightProj_EP_C_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_EP_C_C* ULightProj_EP_C_C::GetDefaultObj()
{
	static class ULightProj_EP_C_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_EP_C_C*>(ULightProj_EP_C_C::StaticClass()->DefaultObject);

	return Default;
}

}


