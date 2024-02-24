#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionarySH_R.MissionarySH_R_C
// (None)

class UClass* UMissionarySH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionarySH_R_C");

	return Clss;
}


// MissionarySH_R_C MissionarySH_R.Default__MissionarySH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionarySH_R_C* UMissionarySH_R_C::GetDefaultObj()
{
	static class UMissionarySH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionarySH_R_C*>(UMissionarySH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


