#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryNL_R.MissionaryNL_R_C
// (None)

class UClass* UMissionaryNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryNL_R_C");

	return Clss;
}


// MissionaryNL_R_C MissionaryNL_R.Default__MissionaryNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryNL_R_C* UMissionaryNL_R_C::GetDefaultObj()
{
	static class UMissionaryNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryNL_R_C*>(UMissionaryNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


