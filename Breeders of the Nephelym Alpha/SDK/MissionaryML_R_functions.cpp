#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryML_R.MissionaryML_R_C
// (None)

class UClass* UMissionaryML_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryML_R_C");

	return Clss;
}


// MissionaryML_R_C MissionaryML_R.Default__MissionaryML_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryML_R_C* UMissionaryML_R_C::GetDefaultObj()
{
	static class UMissionaryML_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryML_R_C*>(UMissionaryML_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


