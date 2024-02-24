#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionarySL_R.MissionarySL_R_C
// (None)

class UClass* UMissionarySL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionarySL_R_C");

	return Clss;
}


// MissionarySL_R_C MissionarySL_R.Default__MissionarySL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionarySL_R_C* UMissionarySL_R_C::GetDefaultObj()
{
	static class UMissionarySL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionarySL_R_C*>(UMissionarySL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


