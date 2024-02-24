#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryMH_R.MissionaryMH_R_C
// (None)

class UClass* UMissionaryMH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryMH_R_C");

	return Clss;
}


// MissionaryMH_R_C MissionaryMH_R.Default__MissionaryMH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryMH_R_C* UMissionaryMH_R_C::GetDefaultObj()
{
	static class UMissionaryMH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryMH_R_C*>(UMissionaryMH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


