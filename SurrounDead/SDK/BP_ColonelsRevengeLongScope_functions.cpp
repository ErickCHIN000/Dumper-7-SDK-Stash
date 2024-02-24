#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ColonelsRevengeLongScope.BP_ColonelsRevengeLongScope_C
// (Actor)

class UClass* ABP_ColonelsRevengeLongScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ColonelsRevengeLongScope_C");

	return Clss;
}


// BP_ColonelsRevengeLongScope_C BP_ColonelsRevengeLongScope.Default__BP_ColonelsRevengeLongScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ColonelsRevengeLongScope_C* ABP_ColonelsRevengeLongScope_C::GetDefaultObj()
{
	static class ABP_ColonelsRevengeLongScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ColonelsRevengeLongScope_C*>(ABP_ColonelsRevengeLongScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


