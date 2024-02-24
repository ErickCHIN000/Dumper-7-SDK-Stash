#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryLM_R.MissionaryLM_R_C
// (None)

class UClass* UMissionaryLM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryLM_R_C");

	return Clss;
}


// MissionaryLM_R_C MissionaryLM_R.Default__MissionaryLM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryLM_R_C* UMissionaryLM_R_C::GetDefaultObj()
{
	static class UMissionaryLM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryLM_R_C*>(UMissionaryLM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


