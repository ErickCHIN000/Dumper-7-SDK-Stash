#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CaveCheatMarker.BP_CaveCheatMarker_C
// (Actor)

class UClass* ABP_CaveCheatMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CaveCheatMarker_C");

	return Clss;
}


// BP_CaveCheatMarker_C BP_CaveCheatMarker.Default__BP_CaveCheatMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CaveCheatMarker_C* ABP_CaveCheatMarker_C::GetDefaultObj()
{
	static class ABP_CaveCheatMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CaveCheatMarker_C*>(ABP_CaveCheatMarker_C::StaticClass()->DefaultObject);

	return Default;
}

}


