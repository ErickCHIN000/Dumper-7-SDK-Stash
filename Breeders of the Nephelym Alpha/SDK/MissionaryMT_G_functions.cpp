#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryMT_G.MissionaryMT_G_C
// (None)

class UClass* UMissionaryMT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryMT_G_C");

	return Clss;
}


// MissionaryMT_G_C MissionaryMT_G.Default__MissionaryMT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryMT_G_C* UMissionaryMT_G_C::GetDefaultObj()
{
	static class UMissionaryMT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryMT_G_C*>(UMissionaryMT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


