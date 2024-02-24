#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryLT_G.MissionaryLT_G_C
// (None)

class UClass* UMissionaryLT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryLT_G_C");

	return Clss;
}


// MissionaryLT_G_C MissionaryLT_G.Default__MissionaryLT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryLT_G_C* UMissionaryLT_G_C::GetDefaultObj()
{
	static class UMissionaryLT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryLT_G_C*>(UMissionaryLT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


