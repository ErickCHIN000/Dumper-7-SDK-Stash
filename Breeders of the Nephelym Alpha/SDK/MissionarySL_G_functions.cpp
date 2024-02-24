#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionarySL_G.MissionarySL_G_C
// (None)

class UClass* UMissionarySL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionarySL_G_C");

	return Clss;
}


// MissionarySL_G_C MissionarySL_G.Default__MissionarySL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionarySL_G_C* UMissionarySL_G_C::GetDefaultObj()
{
	static class UMissionarySL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionarySL_G_C*>(UMissionarySL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


