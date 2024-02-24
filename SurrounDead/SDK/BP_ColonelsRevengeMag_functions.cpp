#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ColonelsRevengeMag.BP_ColonelsRevengeMag_C
// (Actor)

class UClass* ABP_ColonelsRevengeMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ColonelsRevengeMag_C");

	return Clss;
}


// BP_ColonelsRevengeMag_C BP_ColonelsRevengeMag.Default__BP_ColonelsRevengeMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ColonelsRevengeMag_C* ABP_ColonelsRevengeMag_C::GetDefaultObj()
{
	static class ABP_ColonelsRevengeMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ColonelsRevengeMag_C*>(ABP_ColonelsRevengeMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


