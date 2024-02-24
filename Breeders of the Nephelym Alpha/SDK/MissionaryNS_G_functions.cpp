#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryNS_G.MissionaryNS_G_C
// (None)

class UClass* UMissionaryNS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryNS_G_C");

	return Clss;
}


// MissionaryNS_G_C MissionaryNS_G.Default__MissionaryNS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryNS_G_C* UMissionaryNS_G_C::GetDefaultObj()
{
	static class UMissionaryNS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryNS_G_C*>(UMissionaryNS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


