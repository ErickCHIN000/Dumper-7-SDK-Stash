#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryTS_G.MissionaryTS_G_C
// (None)

class UClass* UMissionaryTS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryTS_G_C");

	return Clss;
}


// MissionaryTS_G_C MissionaryTS_G.Default__MissionaryTS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryTS_G_C* UMissionaryTS_G_C::GetDefaultObj()
{
	static class UMissionaryTS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryTS_G_C*>(UMissionaryTS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


