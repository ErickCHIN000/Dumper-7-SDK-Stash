#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryTL_G.MissionaryTL_G_C
// (None)

class UClass* UMissionaryTL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryTL_G_C");

	return Clss;
}


// MissionaryTL_G_C MissionaryTL_G.Default__MissionaryTL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryTL_G_C* UMissionaryTL_G_C::GetDefaultObj()
{
	static class UMissionaryTL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryTL_G_C*>(UMissionaryTL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


