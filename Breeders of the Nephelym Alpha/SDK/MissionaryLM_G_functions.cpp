#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryLM_G.MissionaryLM_G_C
// (None)

class UClass* UMissionaryLM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryLM_G_C");

	return Clss;
}


// MissionaryLM_G_C MissionaryLM_G.Default__MissionaryLM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryLM_G_C* UMissionaryLM_G_C::GetDefaultObj()
{
	static class UMissionaryLM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryLM_G_C*>(UMissionaryLM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


