#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryTS_R.MissionaryTS_R_C
// (None)

class UClass* UMissionaryTS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryTS_R_C");

	return Clss;
}


// MissionaryTS_R_C MissionaryTS_R.Default__MissionaryTS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryTS_R_C* UMissionaryTS_R_C::GetDefaultObj()
{
	static class UMissionaryTS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryTS_R_C*>(UMissionaryTS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


