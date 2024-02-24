#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryHT_R.MissionaryHT_R_C
// (None)

class UClass* UMissionaryHT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryHT_R_C");

	return Clss;
}


// MissionaryHT_R_C MissionaryHT_R.Default__MissionaryHT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryHT_R_C* UMissionaryHT_R_C::GetDefaultObj()
{
	static class UMissionaryHT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryHT_R_C*>(UMissionaryHT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


