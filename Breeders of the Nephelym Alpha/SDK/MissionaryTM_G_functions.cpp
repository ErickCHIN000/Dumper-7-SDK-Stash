#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryTM_G.MissionaryTM_G_C
// (None)

class UClass* UMissionaryTM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryTM_G_C");

	return Clss;
}


// MissionaryTM_G_C MissionaryTM_G.Default__MissionaryTM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryTM_G_C* UMissionaryTM_G_C::GetDefaultObj()
{
	static class UMissionaryTM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryTM_G_C*>(UMissionaryTM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


