#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryNT_G.MissionaryNT_G_C
// (None)

class UClass* UMissionaryNT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryNT_G_C");

	return Clss;
}


// MissionaryNT_G_C MissionaryNT_G.Default__MissionaryNT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryNT_G_C* UMissionaryNT_G_C::GetDefaultObj()
{
	static class UMissionaryNT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryNT_G_C*>(UMissionaryNT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}

