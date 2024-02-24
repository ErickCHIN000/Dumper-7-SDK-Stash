#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryTH_R.MissionaryTH_R_C
// (None)

class UClass* UMissionaryTH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryTH_R_C");

	return Clss;
}


// MissionaryTH_R_C MissionaryTH_R.Default__MissionaryTH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryTH_R_C* UMissionaryTH_R_C::GetDefaultObj()
{
	static class UMissionaryTH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryTH_R_C*>(UMissionaryTH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


