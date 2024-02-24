#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionarySM_G.MissionarySM_G_C
// (None)

class UClass* UMissionarySM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionarySM_G_C");

	return Clss;
}


// MissionarySM_G_C MissionarySM_G.Default__MissionarySM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionarySM_G_C* UMissionarySM_G_C::GetDefaultObj()
{
	static class UMissionarySM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionarySM_G_C*>(UMissionarySM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


