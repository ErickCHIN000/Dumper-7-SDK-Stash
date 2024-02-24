#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryHS_G.MissionaryHS_G_C
// (None)

class UClass* UMissionaryHS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryHS_G_C");

	return Clss;
}


// MissionaryHS_G_C MissionaryHS_G.Default__MissionaryHS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryHS_G_C* UMissionaryHS_G_C::GetDefaultObj()
{
	static class UMissionaryHS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryHS_G_C*>(UMissionaryHS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


