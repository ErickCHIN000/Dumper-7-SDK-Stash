#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Wrench.BP_Wrench_C
// (Actor)

class UClass* ABP_Wrench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Wrench_C");

	return Clss;
}


// BP_Wrench_C BP_Wrench.Default__BP_Wrench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Wrench_C* ABP_Wrench_C::GetDefaultObj()
{
	static class ABP_Wrench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Wrench_C*>(ABP_Wrench_C::StaticClass()->DefaultObject);

	return Default;
}

}


