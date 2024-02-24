#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryNM_G.MissionaryNM_G_C
// (None)

class UClass* UMissionaryNM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryNM_G_C");

	return Clss;
}


// MissionaryNM_G_C MissionaryNM_G.Default__MissionaryNM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryNM_G_C* UMissionaryNM_G_C::GetDefaultObj()
{
	static class UMissionaryNM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryNM_G_C*>(UMissionaryNM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


