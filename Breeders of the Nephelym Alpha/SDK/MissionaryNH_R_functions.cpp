#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryNH_R.MissionaryNH_R_C
// (None)

class UClass* UMissionaryNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryNH_R_C");

	return Clss;
}


// MissionaryNH_R_C MissionaryNH_R.Default__MissionaryNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryNH_R_C* UMissionaryNH_R_C::GetDefaultObj()
{
	static class UMissionaryNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryNH_R_C*>(UMissionaryNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


