#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalColonelsRevengeLongScope.BP_LocalColonelsRevengeLongScope_C
// (Actor)

class UClass* ABP_LocalColonelsRevengeLongScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalColonelsRevengeLongScope_C");

	return Clss;
}


// BP_LocalColonelsRevengeLongScope_C BP_LocalColonelsRevengeLongScope.Default__BP_LocalColonelsRevengeLongScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalColonelsRevengeLongScope_C* ABP_LocalColonelsRevengeLongScope_C::GetDefaultObj()
{
	static class ABP_LocalColonelsRevengeLongScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalColonelsRevengeLongScope_C*>(ABP_LocalColonelsRevengeLongScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


