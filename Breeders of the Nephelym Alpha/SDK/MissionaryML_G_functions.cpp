#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryML_G.MissionaryML_G_C
// (None)

class UClass* UMissionaryML_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryML_G_C");

	return Clss;
}


// MissionaryML_G_C MissionaryML_G.Default__MissionaryML_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryML_G_C* UMissionaryML_G_C::GetDefaultObj()
{
	static class UMissionaryML_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryML_G_C*>(UMissionaryML_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


