#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryLN_R.MissionaryLN_R_C
// (None)

class UClass* UMissionaryLN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryLN_R_C");

	return Clss;
}


// MissionaryLN_R_C MissionaryLN_R.Default__MissionaryLN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryLN_R_C* UMissionaryLN_R_C::GetDefaultObj()
{
	static class UMissionaryLN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryLN_R_C*>(UMissionaryLN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


