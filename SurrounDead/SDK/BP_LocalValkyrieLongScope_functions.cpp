#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalValkyrieLongScope.BP_LocalValkyrieLongScope_C
// (Actor)

class UClass* ABP_LocalValkyrieLongScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalValkyrieLongScope_C");

	return Clss;
}


// BP_LocalValkyrieLongScope_C BP_LocalValkyrieLongScope.Default__BP_LocalValkyrieLongScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalValkyrieLongScope_C* ABP_LocalValkyrieLongScope_C::GetDefaultObj()
{
	static class ABP_LocalValkyrieLongScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalValkyrieLongScope_C*>(ABP_LocalValkyrieLongScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


