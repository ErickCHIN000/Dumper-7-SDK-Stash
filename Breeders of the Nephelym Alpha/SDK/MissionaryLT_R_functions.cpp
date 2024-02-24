#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryLT_R.MissionaryLT_R_C
// (None)

class UClass* UMissionaryLT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryLT_R_C");

	return Clss;
}


// MissionaryLT_R_C MissionaryLT_R.Default__MissionaryLT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryLT_R_C* UMissionaryLT_R_C::GetDefaultObj()
{
	static class UMissionaryLT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryLT_R_C*>(UMissionaryLT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


