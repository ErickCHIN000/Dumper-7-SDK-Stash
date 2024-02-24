#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryHT_G.MissionaryHT_G_C
// (None)

class UClass* UMissionaryHT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryHT_G_C");

	return Clss;
}


// MissionaryHT_G_C MissionaryHT_G.Default__MissionaryHT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryHT_G_C* UMissionaryHT_G_C::GetDefaultObj()
{
	static class UMissionaryHT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryHT_G_C*>(UMissionaryHT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


