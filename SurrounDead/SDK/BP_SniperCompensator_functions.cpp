#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SniperCompensator.BP_SniperCompensator_C
// (Actor)

class UClass* ABP_SniperCompensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SniperCompensator_C");

	return Clss;
}


// BP_SniperCompensator_C BP_SniperCompensator.Default__BP_SniperCompensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SniperCompensator_C* ABP_SniperCompensator_C::GetDefaultObj()
{
	static class ABP_SniperCompensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SniperCompensator_C*>(ABP_SniperCompensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


