#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryHM_R.MissionaryHM_R_C
// (None)

class UClass* UMissionaryHM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryHM_R_C");

	return Clss;
}


// MissionaryHM_R_C MissionaryHM_R.Default__MissionaryHM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryHM_R_C* UMissionaryHM_R_C::GetDefaultObj()
{
	static class UMissionaryHM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryHM_R_C*>(UMissionaryHM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


