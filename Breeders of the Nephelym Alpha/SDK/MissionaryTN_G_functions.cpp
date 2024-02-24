#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryTN_G.MissionaryTN_G_C
// (None)

class UClass* UMissionaryTN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryTN_G_C");

	return Clss;
}


// MissionaryTN_G_C MissionaryTN_G.Default__MissionaryTN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryTN_G_C* UMissionaryTN_G_C::GetDefaultObj()
{
	static class UMissionaryTN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryTN_G_C*>(UMissionaryTN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


