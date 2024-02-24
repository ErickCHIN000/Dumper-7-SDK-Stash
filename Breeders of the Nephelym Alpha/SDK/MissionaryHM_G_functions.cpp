#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryHM_G.MissionaryHM_G_C
// (None)

class UClass* UMissionaryHM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryHM_G_C");

	return Clss;
}


// MissionaryHM_G_C MissionaryHM_G.Default__MissionaryHM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryHM_G_C* UMissionaryHM_G_C::GetDefaultObj()
{
	static class UMissionaryHM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryHM_G_C*>(UMissionaryHM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


