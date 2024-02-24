#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryLH_R.MissionaryLH_R_C
// (None)

class UClass* UMissionaryLH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryLH_R_C");

	return Clss;
}


// MissionaryLH_R_C MissionaryLH_R.Default__MissionaryLH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryLH_R_C* UMissionaryLH_R_C::GetDefaultObj()
{
	static class UMissionaryLH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryLH_R_C*>(UMissionaryLH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


