#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionarySM_R.MissionarySM_R_C
// (None)

class UClass* UMissionarySM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionarySM_R_C");

	return Clss;
}


// MissionarySM_R_C MissionarySM_R.Default__MissionarySM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionarySM_R_C* UMissionarySM_R_C::GetDefaultObj()
{
	static class UMissionarySM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionarySM_R_C*>(UMissionarySM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


