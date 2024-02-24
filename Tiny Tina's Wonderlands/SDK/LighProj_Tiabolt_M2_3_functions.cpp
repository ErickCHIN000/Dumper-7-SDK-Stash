#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LighProj_Tiabolt_M2_3.LighProj_Tiabolt_M2_3_C
// (None)

class UClass* ULighProj_Tiabolt_M2_3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LighProj_Tiabolt_M2_3_C");

	return Clss;
}


// LighProj_Tiabolt_M2_3_C LighProj_Tiabolt_M2_3.Default__LighProj_Tiabolt_M2_3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULighProj_Tiabolt_M2_3_C* ULighProj_Tiabolt_M2_3_C::GetDefaultObj()
{
	static class ULighProj_Tiabolt_M2_3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULighProj_Tiabolt_M2_3_C*>(ULighProj_Tiabolt_M2_3_C::StaticClass()->DefaultObject);

	return Default;
}

}


