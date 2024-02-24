#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryTH_G.MissionaryTH_G_C
// (None)

class UClass* UMissionaryTH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryTH_G_C");

	return Clss;
}


// MissionaryTH_G_C MissionaryTH_G.Default__MissionaryTH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryTH_G_C* UMissionaryTH_G_C::GetDefaultObj()
{
	static class UMissionaryTH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryTH_G_C*>(UMissionaryTH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


