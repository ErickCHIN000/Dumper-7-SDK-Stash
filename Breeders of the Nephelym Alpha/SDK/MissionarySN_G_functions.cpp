#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionarySN_G.MissionarySN_G_C
// (None)

class UClass* UMissionarySN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionarySN_G_C");

	return Clss;
}


// MissionarySN_G_C MissionarySN_G.Default__MissionarySN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionarySN_G_C* UMissionarySN_G_C::GetDefaultObj()
{
	static class UMissionarySN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionarySN_G_C*>(UMissionarySN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


