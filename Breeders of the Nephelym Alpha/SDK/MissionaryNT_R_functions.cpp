#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryNT_R.MissionaryNT_R_C
// (None)

class UClass* UMissionaryNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryNT_R_C");

	return Clss;
}


// MissionaryNT_R_C MissionaryNT_R.Default__MissionaryNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryNT_R_C* UMissionaryNT_R_C::GetDefaultObj()
{
	static class UMissionaryNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryNT_R_C*>(UMissionaryNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


