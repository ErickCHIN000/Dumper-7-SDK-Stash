#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryMT_R.MissionaryMT_R_C
// (None)

class UClass* UMissionaryMT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryMT_R_C");

	return Clss;
}


// MissionaryMT_R_C MissionaryMT_R.Default__MissionaryMT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryMT_R_C* UMissionaryMT_R_C::GetDefaultObj()
{
	static class UMissionaryMT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryMT_R_C*>(UMissionaryMT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


