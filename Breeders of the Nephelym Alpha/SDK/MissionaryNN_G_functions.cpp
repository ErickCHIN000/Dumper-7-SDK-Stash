#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryNN_G.MissionaryNN_G_C
// (None)

class UClass* UMissionaryNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryNN_G_C");

	return Clss;
}


// MissionaryNN_G_C MissionaryNN_G.Default__MissionaryNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryNN_G_C* UMissionaryNN_G_C::GetDefaultObj()
{
	static class UMissionaryNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryNN_G_C*>(UMissionaryNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


