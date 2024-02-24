#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalColonelsRevengeSuppressor.BP_LocalColonelsRevengeSuppressor_C
// (Actor)

class UClass* ABP_LocalColonelsRevengeSuppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalColonelsRevengeSuppressor_C");

	return Clss;
}


// BP_LocalColonelsRevengeSuppressor_C BP_LocalColonelsRevengeSuppressor.Default__BP_LocalColonelsRevengeSuppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalColonelsRevengeSuppressor_C* ABP_LocalColonelsRevengeSuppressor_C::GetDefaultObj()
{
	static class ABP_LocalColonelsRevengeSuppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalColonelsRevengeSuppressor_C*>(ABP_LocalColonelsRevengeSuppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


