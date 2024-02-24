#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Dazzler_Child.LightProj_Dazzler_Child_C
// (None)

class UClass* ULightProj_Dazzler_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Dazzler_Child_C");

	return Clss;
}


// LightProj_Dazzler_Child_C LightProj_Dazzler_Child.Default__LightProj_Dazzler_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Dazzler_Child_C* ULightProj_Dazzler_Child_C::GetDefaultObj()
{
	static class ULightProj_Dazzler_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Dazzler_Child_C*>(ULightProj_Dazzler_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


