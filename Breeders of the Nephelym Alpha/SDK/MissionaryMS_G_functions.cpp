#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryMS_G.MissionaryMS_G_C
// (None)

class UClass* UMissionaryMS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryMS_G_C");

	return Clss;
}


// MissionaryMS_G_C MissionaryMS_G.Default__MissionaryMS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryMS_G_C* UMissionaryMS_G_C::GetDefaultObj()
{
	static class UMissionaryMS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryMS_G_C*>(UMissionaryMS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


