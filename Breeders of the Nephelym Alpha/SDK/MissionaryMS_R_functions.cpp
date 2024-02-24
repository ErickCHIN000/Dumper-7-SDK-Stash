#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryMS_R.MissionaryMS_R_C
// (None)

class UClass* UMissionaryMS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryMS_R_C");

	return Clss;
}


// MissionaryMS_R_C MissionaryMS_R.Default__MissionaryMS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryMS_R_C* UMissionaryMS_R_C::GetDefaultObj()
{
	static class UMissionaryMS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryMS_R_C*>(UMissionaryMS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


