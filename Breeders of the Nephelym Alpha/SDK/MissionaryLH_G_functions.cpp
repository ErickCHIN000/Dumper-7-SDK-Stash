#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryLH_G.MissionaryLH_G_C
// (None)

class UClass* UMissionaryLH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryLH_G_C");

	return Clss;
}


// MissionaryLH_G_C MissionaryLH_G.Default__MissionaryLH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryLH_G_C* UMissionaryLH_G_C::GetDefaultObj()
{
	static class UMissionaryLH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryLH_G_C*>(UMissionaryLH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


