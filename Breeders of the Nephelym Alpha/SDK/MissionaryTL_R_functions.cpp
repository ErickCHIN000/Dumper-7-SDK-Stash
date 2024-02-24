#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryTL_R.MissionaryTL_R_C
// (None)

class UClass* UMissionaryTL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryTL_R_C");

	return Clss;
}


// MissionaryTL_R_C MissionaryTL_R.Default__MissionaryTL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryTL_R_C* UMissionaryTL_R_C::GetDefaultObj()
{
	static class UMissionaryTL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryTL_R_C*>(UMissionaryTL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


