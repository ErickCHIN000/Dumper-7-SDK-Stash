#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ColonelsRevengeCompensator.BP_ColonelsRevengeCompensator_C
// (Actor)

class UClass* ABP_ColonelsRevengeCompensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ColonelsRevengeCompensator_C");

	return Clss;
}


// BP_ColonelsRevengeCompensator_C BP_ColonelsRevengeCompensator.Default__BP_ColonelsRevengeCompensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ColonelsRevengeCompensator_C* ABP_ColonelsRevengeCompensator_C::GetDefaultObj()
{
	static class ABP_ColonelsRevengeCompensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ColonelsRevengeCompensator_C*>(ABP_ColonelsRevengeCompensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


