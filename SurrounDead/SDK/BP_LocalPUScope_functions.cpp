#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalPUScope.BP_LocalPUScope_C
// (Actor)

class UClass* ABP_LocalPUScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalPUScope_C");

	return Clss;
}


// BP_LocalPUScope_C BP_LocalPUScope.Default__BP_LocalPUScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalPUScope_C* ABP_LocalPUScope_C::GetDefaultObj()
{
	static class ABP_LocalPUScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalPUScope_C*>(ABP_LocalPUScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


