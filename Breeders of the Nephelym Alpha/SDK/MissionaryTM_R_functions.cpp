#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryTM_R.MissionaryTM_R_C
// (None)

class UClass* UMissionaryTM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryTM_R_C");

	return Clss;
}


// MissionaryTM_R_C MissionaryTM_R.Default__MissionaryTM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryTM_R_C* UMissionaryTM_R_C::GetDefaultObj()
{
	static class UMissionaryTM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryTM_R_C*>(UMissionaryTM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


