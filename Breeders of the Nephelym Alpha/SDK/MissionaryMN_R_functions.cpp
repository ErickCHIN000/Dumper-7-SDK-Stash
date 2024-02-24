#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionaryMN_R.MissionaryMN_R_C
// (None)

class UClass* UMissionaryMN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionaryMN_R_C");

	return Clss;
}


// MissionaryMN_R_C MissionaryMN_R.Default__MissionaryMN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionaryMN_R_C* UMissionaryMN_R_C::GetDefaultObj()
{
	static class UMissionaryMN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionaryMN_R_C*>(UMissionaryMN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


