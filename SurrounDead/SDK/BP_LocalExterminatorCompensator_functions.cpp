#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalExterminatorCompensator.BP_LocalExterminatorCompensator_C
// (Actor)

class UClass* ABP_LocalExterminatorCompensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalExterminatorCompensator_C");

	return Clss;
}


// BP_LocalExterminatorCompensator_C BP_LocalExterminatorCompensator.Default__BP_LocalExterminatorCompensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalExterminatorCompensator_C* ABP_LocalExterminatorCompensator_C::GetDefaultObj()
{
	static class ABP_LocalExterminatorCompensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalExterminatorCompensator_C*>(ABP_LocalExterminatorCompensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


