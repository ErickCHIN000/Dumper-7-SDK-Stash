#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PipeWrench.BP_PipeWrench_C
// (Actor)

class UClass* ABP_PipeWrench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PipeWrench_C");

	return Clss;
}


// BP_PipeWrench_C BP_PipeWrench.Default__BP_PipeWrench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PipeWrench_C* ABP_PipeWrench_C::GetDefaultObj()
{
	static class ABP_PipeWrench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PipeWrench_C*>(ABP_PipeWrench_C::StaticClass()->DefaultObject);

	return Default;
}

}


