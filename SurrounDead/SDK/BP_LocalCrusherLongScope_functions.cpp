#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalCrusherLongScope.BP_LocalCrusherLongScope_C
// (Actor)

class UClass* ABP_LocalCrusherLongScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalCrusherLongScope_C");

	return Clss;
}


// BP_LocalCrusherLongScope_C BP_LocalCrusherLongScope.Default__BP_LocalCrusherLongScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalCrusherLongScope_C* ABP_LocalCrusherLongScope_C::GetDefaultObj()
{
	static class ABP_LocalCrusherLongScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalCrusherLongScope_C*>(ABP_LocalCrusherLongScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


