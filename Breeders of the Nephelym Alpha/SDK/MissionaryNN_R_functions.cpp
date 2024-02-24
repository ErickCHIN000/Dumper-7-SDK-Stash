#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryNN_R.MissionaryNN_R_C
// (None)

class UClass* UMissionaryNN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryNN_R_C");

	return Clss;
}


// MissionaryNN_R_C MissionaryNN_R.Default__MissionaryNN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryNN_R_C* UMissionaryNN_R_C::GetDefaultObj()
{
	static class UMissionaryNN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryNN_R_C*>(UMissionaryNN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


