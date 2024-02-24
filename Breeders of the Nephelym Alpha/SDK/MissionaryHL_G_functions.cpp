#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryHL_G.MissionaryHL_G_C
// (None)

class UClass* UMissionaryHL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryHL_G_C");

	return Clss;
}


// MissionaryHL_G_C MissionaryHL_G.Default__MissionaryHL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryHL_G_C* UMissionaryHL_G_C::GetDefaultObj()
{
	static class UMissionaryHL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryHL_G_C*>(UMissionaryHL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


