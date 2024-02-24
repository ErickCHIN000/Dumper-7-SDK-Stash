#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryHN_G.MissionaryHN_G_C
// (None)

class UClass* UMissionaryHN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryHN_G_C");

	return Clss;
}


// MissionaryHN_G_C MissionaryHN_G.Default__MissionaryHN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryHN_G_C* UMissionaryHN_G_C::GetDefaultObj()
{
	static class UMissionaryHN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryHN_G_C*>(UMissionaryHN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


