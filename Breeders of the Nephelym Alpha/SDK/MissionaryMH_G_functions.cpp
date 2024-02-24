#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryMH_G.MissionaryMH_G_C
// (None)

class UClass* UMissionaryMH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryMH_G_C");

	return Clss;
}


// MissionaryMH_G_C MissionaryMH_G.Default__MissionaryMH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryMH_G_C* UMissionaryMH_G_C::GetDefaultObj()
{
	static class UMissionaryMH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryMH_G_C*>(UMissionaryMH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


