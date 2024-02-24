#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryLS_R.MissionaryLS_R_C
// (None)

class UClass* UMissionaryLS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryLS_R_C");

	return Clss;
}


// MissionaryLS_R_C MissionaryLS_R.Default__MissionaryLS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryLS_R_C* UMissionaryLS_R_C::GetDefaultObj()
{
	static class UMissionaryLS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryLS_R_C*>(UMissionaryLS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


