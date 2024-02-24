#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryLS_G.MissionaryLS_G_C
// (None)

class UClass* UMissionaryLS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryLS_G_C");

	return Clss;
}


// MissionaryLS_G_C MissionaryLS_G.Default__MissionaryLS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryLS_G_C* UMissionaryLS_G_C::GetDefaultObj()
{
	static class UMissionaryLS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryLS_G_C*>(UMissionaryLS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


