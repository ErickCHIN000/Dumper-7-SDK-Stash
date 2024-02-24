#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryMN_G.MissionaryMN_G_C
// (None)

class UClass* UMissionaryMN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryMN_G_C");

	return Clss;
}


// MissionaryMN_G_C MissionaryMN_G.Default__MissionaryMN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryMN_G_C* UMissionaryMN_G_C::GetDefaultObj()
{
	static class UMissionaryMN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryMN_G_C*>(UMissionaryMN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


