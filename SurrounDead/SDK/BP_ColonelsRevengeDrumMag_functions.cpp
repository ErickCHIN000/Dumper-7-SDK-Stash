#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ColonelsRevengeDrumMag.BP_ColonelsRevengeDrumMag_C
// (Actor)

class UClass* ABP_ColonelsRevengeDrumMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ColonelsRevengeDrumMag_C");

	return Clss;
}


// BP_ColonelsRevengeDrumMag_C BP_ColonelsRevengeDrumMag.Default__BP_ColonelsRevengeDrumMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ColonelsRevengeDrumMag_C* ABP_ColonelsRevengeDrumMag_C::GetDefaultObj()
{
	static class ABP_ColonelsRevengeDrumMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ColonelsRevengeDrumMag_C*>(ABP_ColonelsRevengeDrumMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


