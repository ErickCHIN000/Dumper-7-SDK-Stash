#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RTXCheatMarker.BP_RTXCheatMarker_C
// (Actor)

class UClass* ABP_RTXCheatMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RTXCheatMarker_C");

	return Clss;
}


// BP_RTXCheatMarker_C BP_RTXCheatMarker.Default__BP_RTXCheatMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RTXCheatMarker_C* ABP_RTXCheatMarker_C::GetDefaultObj()
{
	static class ABP_RTXCheatMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RTXCheatMarker_C*>(ABP_RTXCheatMarker_C::StaticClass()->DefaultObject);

	return Default;
}

}


