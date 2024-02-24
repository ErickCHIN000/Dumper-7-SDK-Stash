#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LighProj_Tiabolt_M2_2.LighProj_Tiabolt_M2_2_C
// (None)

class UClass* ULighProj_Tiabolt_M2_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LighProj_Tiabolt_M2_2_C");

	return Clss;
}


// LighProj_Tiabolt_M2_2_C LighProj_Tiabolt_M2_2.Default__LighProj_Tiabolt_M2_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULighProj_Tiabolt_M2_2_C* ULighProj_Tiabolt_M2_2_C::GetDefaultObj()
{
	static class ULighProj_Tiabolt_M2_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULighProj_Tiabolt_M2_2_C*>(ULighProj_Tiabolt_M2_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


