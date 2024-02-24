#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionarySN_R.MissionarySN_R_C
// (None)

class UClass* UMissionarySN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionarySN_R_C");

	return Clss;
}


// MissionarySN_R_C MissionarySN_R.Default__MissionarySN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionarySN_R_C* UMissionarySN_R_C::GetDefaultObj()
{
	static class UMissionarySN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionarySN_R_C*>(UMissionarySN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


