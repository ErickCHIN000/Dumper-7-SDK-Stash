#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryNL_G.MissionaryNL_G_C
// (None)

class UClass* UMissionaryNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryNL_G_C");

	return Clss;
}


// MissionaryNL_G_C MissionaryNL_G.Default__MissionaryNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryNL_G_C* UMissionaryNL_G_C::GetDefaultObj()
{
	static class UMissionaryNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryNL_G_C*>(UMissionaryNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


