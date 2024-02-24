#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CrusherLongScope.BP_CrusherLongScope_C
// (Actor)

class UClass* ABP_CrusherLongScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CrusherLongScope_C");

	return Clss;
}


// BP_CrusherLongScope_C BP_CrusherLongScope.Default__BP_CrusherLongScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CrusherLongScope_C* ABP_CrusherLongScope_C::GetDefaultObj()
{
	static class ABP_CrusherLongScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CrusherLongScope_C*>(ABP_CrusherLongScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


