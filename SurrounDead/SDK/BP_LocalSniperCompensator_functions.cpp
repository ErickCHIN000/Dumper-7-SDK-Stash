#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalSniperCompensator.BP_LocalSniperCompensator_C
// (Actor)

class UClass* ABP_LocalSniperCompensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalSniperCompensator_C");

	return Clss;
}


// BP_LocalSniperCompensator_C BP_LocalSniperCompensator.Default__BP_LocalSniperCompensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalSniperCompensator_C* ABP_LocalSniperCompensator_C::GetDefaultObj()
{
	static class ABP_LocalSniperCompensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalSniperCompensator_C*>(ABP_LocalSniperCompensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


