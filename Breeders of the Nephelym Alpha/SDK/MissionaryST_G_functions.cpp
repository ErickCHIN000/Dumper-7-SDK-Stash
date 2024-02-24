#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryST_G.MissionaryST_G_C
// (None)

class UClass* UMissionaryST_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryST_G_C");

	return Clss;
}


// MissionaryST_G_C MissionaryST_G.Default__MissionaryST_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryST_G_C* UMissionaryST_G_C::GetDefaultObj()
{
	static class UMissionaryST_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryST_G_C*>(UMissionaryST_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


