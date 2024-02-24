#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryNH_G.MissionaryNH_G_C
// (None)

class UClass* UMissionaryNH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryNH_G_C");

	return Clss;
}


// MissionaryNH_G_C MissionaryNH_G.Default__MissionaryNH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryNH_G_C* UMissionaryNH_G_C::GetDefaultObj()
{
	static class UMissionaryNH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryNH_G_C*>(UMissionaryNH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


