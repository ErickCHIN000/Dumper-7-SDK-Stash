#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryLN_G.MissionaryLN_G_C
// (None)

class UClass* UMissionaryLN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryLN_G_C");

	return Clss;
}


// MissionaryLN_G_C MissionaryLN_G.Default__MissionaryLN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryLN_G_C* UMissionaryLN_G_C::GetDefaultObj()
{
	static class UMissionaryLN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryLN_G_C*>(UMissionaryLN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


