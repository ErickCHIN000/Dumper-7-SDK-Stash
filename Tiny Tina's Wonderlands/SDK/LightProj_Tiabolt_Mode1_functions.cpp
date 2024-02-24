#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Tiabolt_Mode1.LightProj_Tiabolt_Mode1_C
// (None)

class UClass* ULightProj_Tiabolt_Mode1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Tiabolt_Mode1_C");

	return Clss;
}


// LightProj_Tiabolt_Mode1_C LightProj_Tiabolt_Mode1.Default__LightProj_Tiabolt_Mode1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Tiabolt_Mode1_C* ULightProj_Tiabolt_Mode1_C::GetDefaultObj()
{
	static class ULightProj_Tiabolt_Mode1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Tiabolt_Mode1_C*>(ULightProj_Tiabolt_Mode1_C::StaticClass()->DefaultObject);

	return Default;
}

}


