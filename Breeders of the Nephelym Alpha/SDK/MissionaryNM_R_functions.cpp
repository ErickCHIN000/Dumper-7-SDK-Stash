#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryNM_R.MissionaryNM_R_C
// (None)

class UClass* UMissionaryNM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryNM_R_C");

	return Clss;
}


// MissionaryNM_R_C MissionaryNM_R.Default__MissionaryNM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryNM_R_C* UMissionaryNM_R_C::GetDefaultObj()
{
	static class UMissionaryNM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryNM_R_C*>(UMissionaryNM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


