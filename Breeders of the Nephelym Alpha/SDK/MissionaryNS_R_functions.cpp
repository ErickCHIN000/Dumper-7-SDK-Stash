#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryNS_R.MissionaryNS_R_C
// (None)

class UClass* UMissionaryNS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryNS_R_C");

	return Clss;
}


// MissionaryNS_R_C MissionaryNS_R.Default__MissionaryNS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryNS_R_C* UMissionaryNS_R_C::GetDefaultObj()
{
	static class UMissionaryNS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryNS_R_C*>(UMissionaryNS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


