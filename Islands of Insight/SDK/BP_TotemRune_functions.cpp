#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TotemRune.BP_TotemRune_C
// (Actor)

class UClass* ABP_TotemRune_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TotemRune_C");

	return Clss;
}


// BP_TotemRune_C BP_TotemRune.Default__BP_TotemRune_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TotemRune_C* ABP_TotemRune_C::GetDefaultObj()
{
	static class ABP_TotemRune_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TotemRune_C*>(ABP_TotemRune_C::StaticClass()->DefaultObject);

	return Default;
}

}


