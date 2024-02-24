#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryST_R.MissionaryST_R_C
// (None)

class UClass* UMissionaryST_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryST_R_C");

	return Clss;
}


// MissionaryST_R_C MissionaryST_R.Default__MissionaryST_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryST_R_C* UMissionaryST_R_C::GetDefaultObj()
{
	static class UMissionaryST_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryST_R_C*>(UMissionaryST_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


