#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryTN_R.MissionaryTN_R_C
// (None)

class UClass* UMissionaryTN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryTN_R_C");

	return Clss;
}


// MissionaryTN_R_C MissionaryTN_R.Default__MissionaryTN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryTN_R_C* UMissionaryTN_R_C::GetDefaultObj()
{
	static class UMissionaryTN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryTN_R_C*>(UMissionaryTN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


