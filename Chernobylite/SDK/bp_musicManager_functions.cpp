#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_musicManager.bp_musicManager_C
// (Actor)

class UClass* Abp_musicManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_musicManager_C");

	return Clss;
}


// bp_musicManager_C bp_musicManager.Default__bp_musicManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_musicManager_C* Abp_musicManager_C::GetDefaultObj()
{
	static class Abp_musicManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_musicManager_C*>(Abp_musicManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


