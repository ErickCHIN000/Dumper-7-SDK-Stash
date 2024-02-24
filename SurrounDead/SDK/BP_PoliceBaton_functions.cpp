#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PoliceBaton.BP_PoliceBaton_C
// (Actor)

class UClass* ABP_PoliceBaton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PoliceBaton_C");

	return Clss;
}


// BP_PoliceBaton_C BP_PoliceBaton.Default__BP_PoliceBaton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PoliceBaton_C* ABP_PoliceBaton_C::GetDefaultObj()
{
	static class ABP_PoliceBaton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PoliceBaton_C*>(ABP_PoliceBaton_C::StaticClass()->DefaultObject);

	return Default;
}

}


