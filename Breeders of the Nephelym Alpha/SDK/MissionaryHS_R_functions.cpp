#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryHS_R.MissionaryHS_R_C
// (None)

class UClass* UMissionaryHS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryHS_R_C");

	return Clss;
}


// MissionaryHS_R_C MissionaryHS_R.Default__MissionaryHS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryHS_R_C* UMissionaryHS_R_C::GetDefaultObj()
{
	static class UMissionaryHS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryHS_R_C*>(UMissionaryHS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


