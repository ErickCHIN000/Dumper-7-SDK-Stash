#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryHN_R.MissionaryHN_R_C
// (None)

class UClass* UMissionaryHN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryHN_R_C");

	return Clss;
}


// MissionaryHN_R_C MissionaryHN_R.Default__MissionaryHN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryHN_R_C* UMissionaryHN_R_C::GetDefaultObj()
{
	static class UMissionaryHN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryHN_R_C*>(UMissionaryHN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


